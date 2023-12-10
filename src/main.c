#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER_SIZE 1024

// 结构体用于存储温度传感器数据
struct TemperatureSensor {
    char name[MAX_BUFFER_SIZE];
    char status[MAX_BUFFER_SIZE];
    char state[MAX_BUFFER_SIZE];
    double value;
    char unit[MAX_BUFFER_SIZE];
};

int main() {
    char command[MAX_BUFFER_SIZE];
    FILE *fp;

    // 构建ipmitool命令，获取温度传感器数据
    snprintf(command, sizeof(command), "ipmitool sdr type Temperature");

    // 执行命令并读取输出
    fp = popen(command, "r");
    if (fp == NULL) {
        perror("Failed to run ipmitool");
        return 1;
    }

    // 定义一个结构体数组，用于存储温度传感器数据
    struct TemperatureSensor sensors[100];
    int sensorCount = 0;

    // 读取并解析温度数据
    char buffer[MAX_BUFFER_SIZE];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        struct TemperatureSensor sensor;
        if (sscanf(buffer, "%[^|]|%*s|%s|%*s|%lf %s", sensor.name, sensor.status, sensor.state, &sensor.value, sensor.unit) == 5) {
            // 将传感器数据存入结构体数组
            sensors[sensorCount] = sensor;
            sensorCount++;
        }
    }

    // 关闭文件指针
    pclose(fp);

    // 找到最高温度传感器
    double maxTemperature = -1.0;
    char maxTemperatureSensor[MAX_BUFFER_SIZE];

    for (int i = 0; i < sensorCount; i++) {
        if (sensors[i].value > maxTemperature) {
            maxTemperature = sensors[i].value;
            strncpy(maxTemperatureSensor, sensors[i].name, sizeof(maxTemperatureSensor));
        }
    }

    printf("Highest temperature sensor: %s\n", maxTemperatureSensor);
    printf("Highest temperature value: %.1f %s\n", maxTemperature, sensors[0].unit);

    // 根据温度值执行相应的风扇控制
    if (maxTemperature > 35.0) {
        // 启用iDRAC动态风扇控制
        system("ipmitool raw 0x30 0x30 0x02 0xff 0x0f");
    } else {
        // 启用手动风扇控制（示例中使用了固定的风扇转速值）
        system("ipmitool raw 0x30 0x30 0x02 0xff 0x0a"); // 10%示例值
    }

    return 0;
}

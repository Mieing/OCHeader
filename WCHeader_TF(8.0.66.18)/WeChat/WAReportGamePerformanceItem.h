@class NSString;

@interface WAReportGamePerformanceItem : WAReportBaseItem

@property (copy, nonatomic) NSString *libVersion;
@property (nonatomic) long long renderMode;
@property (nonatomic) long long mainCanvasType;
@property (nonatomic) long long sceneId;
@property (nonatomic) long long runtimeDuration;
@property (nonatomic) long long fps;
@property (nonatomic) long long fpsEx;
@property (nonatomic) long long jank;
@property (nonatomic) long long bigJank;
@property (nonatomic) long long stutter;
@property (nonatomic) long long memory;
@property (nonatomic) long long memoryDiff;
@property (nonatomic) long long availableMemory;
@property (nonatomic) long long gpuMemory;
@property (nonatomic) long long gpuUtilizationDevice;
@property (nonatomic) long long cpuUtilization;
@property (nonatomic) long long cpuUtilizationDevice;
@property (nonatomic) long long batteryLevel;
@property (nonatomic) long long batteryInfo;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSString *hostAppId;
@property (copy, nonatomic) NSString *runtimePlatformInfo;
@property (nonatomic) long long thermalState;

- (id)init;
- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end

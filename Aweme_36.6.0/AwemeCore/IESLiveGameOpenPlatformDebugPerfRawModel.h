@interface IESLiveGameOpenPlatformDebugPerfRawModel : NSObject

@property (nonatomic) double cpuUsage;
@property (nonatomic) double gpuUsage;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double stutterDuration;
@property (nonatomic) int appRealFps;
@property (nonatomic) long long thermalState;

@end

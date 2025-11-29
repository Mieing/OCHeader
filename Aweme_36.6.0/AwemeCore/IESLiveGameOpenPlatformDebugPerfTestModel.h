@class NSString;

@interface IESLiveGameOpenPlatformDebugPerfTestModel : NSObject

@property (nonatomic) int timeInterval;
@property (nonatomic) double cpuUsage;
@property (nonatomic) double gpuUsage;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double stutterRate;
@property (nonatomic) int appRealFps;
@property (copy, nonatomic) NSString *thermalState;

- (void).cxx_destruct;
- (id)toDictionary;

@end

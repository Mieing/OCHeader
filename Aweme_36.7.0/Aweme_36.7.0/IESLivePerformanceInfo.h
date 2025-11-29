@interface IESLivePerformanceInfo : NSObject

@property (nonatomic) long long device;
@property (nonatomic) double cpuUsage;
@property (nonatomic) double gpuUsage;
@property (nonatomic) double batteryLevel;
@property (nonatomic) double uiStallSlightRate;
@property (nonatomic) double uiStallModerateRate;
@property (nonatomic) double uiStallSeriousRate;
@property (nonatomic) double uiStallRate;
@property (nonatomic) long long netQuality;
@property (nonatomic) long long thermal;

@end

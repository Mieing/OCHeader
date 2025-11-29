@class NSString, NSNumber;

@interface IESLiveGameOpenPlatformDebugPerfPreviewModel : NSObject

@property (nonatomic) double cpuUsage;
@property (nonatomic) double cpuUsageAvg;
@property (nonatomic) double gpuUsage;
@property (nonatomic) double gpuUsageAvg;
@property (nonatomic) double memoryUsage;
@property (nonatomic) double memoryUsageAvg;
@property (nonatomic) double stutterRate;
@property (nonatomic) double stutterRateAvg;
@property (nonatomic) double appRealFps;
@property (nonatomic) double appRealFpsAvg;
@property (copy, nonatomic) NSString *thermalState;
@property (retain, nonatomic) NSNumber *xplayFps;
@property (retain, nonatomic) NSNumber *xplayRxKBps;
@property (retain, nonatomic) NSNumber *xplayVideoWidth;
@property (retain, nonatomic) NSNumber *xplayVideoHeight;

- (void).cxx_destruct;
- (id)previewText;

@end

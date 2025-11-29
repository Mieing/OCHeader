@class IESLiveGameOpenPlatformDebugPerfTestModel, IESLiveGameOpenPlatformDebugPerfPreviewModel;

@interface IESLiveGameOpenPlatformDebugPerfMonitorViewModel : NSObject

@property (nonatomic) int collectCount;
@property (nonatomic) int collectPeriod;
@property (nonatomic) int refreshCount;
@property (nonatomic) int refreshPeriod;
@property (nonatomic) double lowRealFpsCount;
@property (nonatomic) double cpuUsageSum;
@property (nonatomic) double gpuUsageSum;
@property (nonatomic) double memoryUsageSum;
@property (nonatomic) double stutterSum;
@property (nonatomic) int appRealFpsSum;
@property (nonatomic) long long thermalStateMax;
@property (nonatomic) double stutterDurationPerPeriod;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfTestModel *testModel;
@property (nonatomic) double startInterval;
@property (retain, nonatomic) IESLiveGameOpenPlatformDebugPerfPreviewModel *previewModel;

- (id)initWithDIContext:(id)a0;
- (void)updateWithRawData:(id)a0 callback:(id /* block */)a1;
- (id)uploadTestModel;
- (void).cxx_destruct;

@end

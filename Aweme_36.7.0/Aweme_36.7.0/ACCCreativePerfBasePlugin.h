@class RACDisposable, RACQueueScheduler, NSString;

@interface ACCCreativePerfBasePlugin : ACCCreativePerfPlugin

@property (retain, nonatomic) RACDisposable *basePerfDispose;
@property (retain, nonatomic) RACQueueScheduler *sampleScheduler;
@property (nonatomic) long long basePerfInterval;
@property (nonatomic) unsigned long long currentMonitorPage;
@property (nonatomic) double lastPageSampleTime;
@property double lastSampleTime;
@property (nonatomic) double minInterval;
@property (nonatomic) double monitorDelay;
@property (copy, nonatomic) NSString *onceScene;
@property (nonatomic) BOOL working;
@property (copy, nonatomic) NSString *pageInfo;

+ (void)doTrackPathInfoWithIsEnd:(BOOL)a0;
+ (void)trackStartCreativePath;
+ (void)trackEndCreativePath;

- (void)trackBaseInfoOnceImmediatelyWithScene:(id)a0;
- (void)prepareWithConfig:(id)a0;
- (BOOL)scheduleSampleAfterDelay:(double)a0;
- (void)startBasePerfMonitor;
- (void)sampleBasePerfInfo;
- (void).cxx_destruct;
- (void)clear;
- (void)stop;
- (void)start;

@end

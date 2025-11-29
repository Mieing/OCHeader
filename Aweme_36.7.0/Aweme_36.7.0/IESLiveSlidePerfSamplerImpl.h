@class NSTimer, CADisplayLink, NSDictionary, NSMutableArray;

@interface IESLiveSlidePerfSamplerImpl : NSObject <IESLiveSlidePerfMonitor>

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMutableArray *recordList;
@property (nonatomic) long long frameCount;
@property (nonatomic) double lastTrackTime;
@property (nonatomic) double lastTargetTrackTime;
@property (nonatomic) double lastVSyncInterval;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDictionary *latestPerSampleInfoDic;
@property (nonatomic) BOOL optimize;
@property (nonatomic) long long componentLoadState;
@property (nonatomic) BOOL supportsTargetTimestamp;
@property (nonatomic) BOOL supportsDynamicFrameRate;

- (void)didSetAttachingDIContext;
- (void)applicationWillResignActiveNotification:(id)a0;
- (void)updateScrollState:(long long)a0;
- (void)updateScrollState:(long long)a0 withComponentLoadState:(long long)a1;
- (id)getLatestPerSampleInfoDic;
- (void)_displayLinkAction:(id)a0;
- (void)_report:(id)a0;
- (void)_initData;
- (void)_scheduleEndState;
- (void)_checkDropFrame:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end

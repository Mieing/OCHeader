@class NSTimer, NSDictionary, NSString;

@interface IESLiveStabilityTag : NSObject <IESLiveGiftMetrics, IESLiveExceptionMetrics>

@property long long memoryWarning;
@property long long faceGiftQueueCount;
@property long long trayGiftQueueCount;
@property long long videoGiftQueueCount;
@property (nonatomic) long long period;
@property (nonatomic) float factor;
@property (retain) NSTimer *hotTagTimer;
@property (retain, nonatomic) NSTimer *anchorTimer;
@property (retain, nonatomic) id memoryWarningObserver;
@property (retain, nonatomic) NSDictionary *stabilityTag;
@property (nonatomic) double startBackgroundInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)triggerMemoryThreshold;
- (id)appStateMetrics;
- (id)loadExceptionMetrics;
- (void)addExceptionMetrics:(id)a0;
- (void)cleanExceptionMetrics;
- (void)swipeRoom;
- (void)registerNotificationHandler;
- (void)faceGiftQueueCount:(long long)a0;
- (void)videoGiftQueueCount:(long long)a0;
- (void)trayGiftQueueCount:(long long)a0;
- (void)resetTag;
- (void)startScheduleHotTag;
- (void)stopScheduleHotTag;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;
- (void)stop;
- (void)start;

@end

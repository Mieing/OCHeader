@class NSString, NSDictionary, NSTimer, AWEPlayInteractionContext;

@interface AWESmartCommentPreloadTrigger : NSObject <IESFCEventObserver, AWESmartCommentPreloadTriggerProtocol>

@property (retain, nonatomic) NSDictionary *configDict;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) float videoPercentThreshold;
@property (nonatomic) double lastTriggerTimeInterval;
@property (nonatomic) double triggerGap;
@property (nonatomic) long long maxTriggerTimes;
@property (nonatomic) long long maxVideoLoopTimes;
@property (nonatomic) long long currentTriggerTimes;
@property (nonatomic) long long currentVideoLoopTimes;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (copy, nonatomic) id /* block */ videoPlayedPeriodHandler;
@property (copy, nonatomic) id /* block */ videoWillLoopHandler;
@property (nonatomic) BOOL hasTriggeredByProgress;
@property (copy, nonatomic) id /* block */ currentPlayTimeGetter;
@property (copy, nonatomic) id /* block */ triggerPredictBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onTriggerEvent:(unsigned long long)a0 params:(id)a1;
- (void)onPlayerWillLoopPlaying;
- (id)initWithConfigDict:(id)a0 context:(id)a1 timerBuilder:(id)a2;
- (void)triggerBlockIfNeededWithType:(id)a0 safe:(BOOL)a1;
- (void)onPlayProgressChanged:(float)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end

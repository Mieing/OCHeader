@class NSString;

@interface AWEPlayInteractionVideoDescriptionPreloadController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayerLifeCycleProtocol>

@property (nonatomic) BOOL hasTriggerPreloadForPlayTime;
@property (nonatomic) BOOL hasTriggerPreloadForPlayFinish;
@property (nonatomic) BOOL isRunningService;
@property (nonatomic) BOOL hasPreloadSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)triggerPreLoadCalculateWithActionType:(unsigned long long)a0 withCurrentAweme:(id)a1;
- (void)addPreloadLogInfo:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end

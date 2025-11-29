@class NSString, NSTimer, UIView, AWEPreviewVideoMaskView;
@protocol AWEShowMonetizeAnnieXCardService, AWEPlayInteractionEntertainmentMaskPresenterProtocol;

@interface AWEPlayInteractionEntertainmentMaskController : AWEPlayInteractionBaseController <AWEPlayInteractionControllerDispatchProtocol, AWEPlayInteractionPlayerLifeCycleProtocol, AWEShowMonetizeAnnieXCardPlugin, AWEEntertainmentVideoTrialDelegate, AWEShowMonetizeBillPagePreCachePlugin, AWEShowDataInjCachePlugin>

@property (retain, nonatomic) UIView<AWEShowMonetizeAnnieXCardService> *maskView;
@property (weak, nonatomic) AWEPreviewVideoMaskView *effectMaskView;
@property (retain, nonatomic) id<AWEPlayInteractionEntertainmentMaskPresenterProtocol> presenter;
@property (nonatomic, getter=isHasTrialFinishFirst) BOOL hasTrialFinishFirst;
@property (nonatomic, getter=isPauseByDisableVideoRepeat) BOOL pauseByDisableVideoRepeat;
@property (retain, nonatomic) NSTimer *loadMaskDelayTimer;
@property (nonatomic) BOOL playletBottomButtonShow;
@property (nonatomic) unsigned long long playerStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateControllerWithModel:(id)a0 context:(id)a1 container:(id)a2;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)setHide:(BOOL)a0;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (id)createMaskView;
- (id)createPresenter;
- (void)presenterTrialDidStart:(id)a0;
- (void)presenterTrialDidFinish:(id)a0;
- (void)presenter:(id)a0 trialRemainingTimeDidChange:(double)a1;
- (void)monetizeAnnieXCardShouldMoveToUp:(id)a0;
- (void)monetizeAnnieXCardShouldMoveToBottom:(id)a0;
- (void)monetizeAnnieXCardCallPreviewStatus:(id)a0;
- (void)preCache:(id)a0 didCacheModel:(id)a1 cacheData:(id)a2;
- (void)dataInjCache:(id)a0 didSaveCacheForScene:(id)a1 businessID:(id)a2 object:(id)a3;
- (void)handleAutoUnlockRewardEvent:(long long)a0;
- (void)addEffectMaskViewIfNeeded;
- (void)setOtherViewHidden:(BOOL)a0;
- (void)loadMaskView;
- (void)hideMaskViewIfNeeded:(BOOL)a0;
- (void)sendTrialStatusToMaskView:(BOOL)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)willDisplay;

@end

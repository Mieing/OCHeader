@class IESLiveActionSheetPresentViewController, IESEffectModel, NSNumber, IESLiveGuideToolBarItem;
@protocol IESLiveEffectProcessService;

@interface IESLiveGuideInteractiveGiftStore : IESLiveInteractiveGiftBaseStore

@property (retain, nonatomic) NSNumber *currentEffectId;
@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (retain, nonatomic) id<IESLiveEffectProcessService> effectProcessing;
@property (weak, nonatomic) IESLiveActionSheetPresentViewController *presentVC;
@property (retain, nonatomic) IESLiveGuideToolBarItem *toolBarItem;
@property (nonatomic) BOOL isInPinMode;
@property (nonatomic) BOOL didLoadEffectManagerLocalAsset;

- (id)baseTrackParams;
- (void)componentDidMount;
- (void)toolbarItemReloadFinished;
- (BOOL)isInLive;
- (void)handleBottomPanelDisplay:(BOOL)a0;
- (void)showGiftPanelWithExtra:(id)a0;
- (void)setUpSubscribe;
- (id)initWithTrackContext:(id)a0 componentContext:(id)a1;
- (void)p_showGiftPanel;
- (void)closeGiftPanelForce;
- (void)p_dismissGiftPanelContainer;
- (void)cancelCurrentInteractiveGiftEffect;
- (void)effectUpdateWithGiftID:(long long)a0;
- (BOOL)canDisplayPreSelectEffectWithEffectId:(id)a0;
- (void)playFaceGiftWithEffectId:(id)a0;
- (void)trackForGiftToolBarItemShowWithRedDot:(BOOL)a0;
- (void)trackForGiftToolBarItemClickWithRedDot:(BOOL)a0;
- (BOOL)resourceReadyForEffectId:(id)a0;
- (id)getEffectModelWithEffectId:(id)a0;
- (void)selectGiftWithId:(long long)a0;
- (void)pinModeChange;
- (void).cxx_destruct;

@end

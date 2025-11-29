@class IESLivePaidLinkmicExplainCard, NSString, IESLiveLayoutPlaceholderView, IESLiveGCDTimer, IESLiveInteractivePaidLinkMicSettingModel, IESLiveRightBottomMutuallyExclusiveItem;

@interface IESLiveInteractPaidLinkMicComponent : IESLiveInteractComponentBase <HTSLiveMessageSubscriber, IESLiveAudiencePaidLinkmicRouter, HTSLiveRoomRemoteActions, IESLiveSocialInteractAction, IESLiveAudiencePaidLinkMicAction, IESLiveAnchorPaidLinkMicAction, IESLiveAnchorPaidLinkMicAction>

@property (retain, nonatomic) IESLiveInteractivePaidLinkMicSettingModel *settingModel;
@property (copy, nonatomic) id /* block */ paidLinkmicExplainCardShowCallback;
@property (nonatomic) long long linkmicStatus;
@property (retain, nonatomic) IESLivePaidLinkmicExplainCard *paidLinkmicExplainCard;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *paidLinkmicExplainCardPlaceHolderView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *linkMicExplainCardItem;
@property (nonatomic) double lastShowPaidGuideViewTime;
@property (retain, nonatomic) IESLiveGCDTimer *limitTimer;
@property (nonatomic) BOOL isExplainCardShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentMount;
- (void)componentUnmount;
- (void)didUpdateRoom:(id)a0 timeStamp:(id)a1;
- (void)currentFlattenSceneDidChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)fetchPlayModeInfoIfNeeded;
- (void)fetchPlayCardInfo;
- (void)getPlayModeInfoBeforeApplyWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)showPaidGuideViewWithType:(unsigned long long)a0 extraDict:(id)a1 requestPage:(id)a2;
- (void)showPaidLinkmicExplainCardIfNeeded;
- (BOOL)isLoginUserPaidAndInWaitingOrLinking;
- (void)updateAudienceLinkMicStatus:(long long)a0;
- (void)didClickLinkMicEntrance;
- (id)getCurSettingModelForSmallWindow;
- (void)setSetingModelFromSmallWindowRecover:(id)a0;
- (void)paidLinkmicOpenStatusChanged:(BOOL)a0;
- (void)componentBindContext;
- (BOOL)p_enabledPaidLinkmicAddPrice;
- (void)componentDidUpdatedGuestList:(id)a0;
- (void)loadMessageHandlers;
- (void)setupSettingModel;
- (void)setBlocksForSettingModelForAnchor;
- (void)setBlocksForSettingModelForAudience;
- (void)attachSettingModel;
- (void)addLinkmicTimerIfNeeded:(id)a0;
- (double)linkmicProgress:(id)a0;
- (long long)p_expectedLeaveTime:(id)a0;
- (void)showPaidLinkmicExplainCardIfNeededWithInfo:(id)a0;
- (BOOL)p_isExplainCardScene;
- (void)p_showPaidLinkmicExplainCardWithContent:(id)a0;
- (void)p_hidePaidLinkmicExplainCard;
- (void)p_showPaidLinkmicAlertWithContent:(id)a0;
- (void)p_fetchDiscountInfo;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end

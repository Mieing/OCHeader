@class IESECMoreLiveEcommerceUtil, NSString, IESECXBridgeEventSubscriber, IESECLiveViewPanelUtil, IESECLiveEventFactory, IESECLiveDynamicDecisionCenter, IESECLiveShopCartControl, IESECLiveAtomicAbilityCenter, IESECLiveUserActParamsProvider, NSMutableArray, IESECLiveClearAnimationManager;

@interface IESECLiveAudienceWidget : IESECLiveBaseWidget <IESECLiveAudienceWidgetAtomicProtocol, IESECLiveMessageSubscriber, IESECLiveParamsHandler, IESECLiveClearAnimationDelegate, IESECLiveLoginInterface, IESECLivePerfService, IESECMoreLiveEntranceClickProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECLiveShopCartControl *shopCartControl;
@property (nonatomic) BOOL appeared;
@property (nonatomic) long long cpsRetryCount;
@property (retain, nonatomic) IESECXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) IESECLiveClearAnimationManager *clearAnimManager;
@property (retain, nonatomic) IESECLiveViewPanelUtil *panelUtil;
@property (retain, nonatomic) IESECLiveEventFactory *eventFactory;
@property (retain, nonatomic) IESECLiveAtomicAbilityCenter *atomicAbilityCenter;
@property (retain, nonatomic) IESECMoreLiveEcommerceUtil *moreLiveUtil;
@property (retain, nonatomic) IESECLiveUserActParamsProvider *actParamsProvider;
@property (retain, nonatomic) IESECLiveDynamicDecisionCenter *dynamicDecisionCenter;
@property (retain, nonatomic) NSMutableArray *lynxEventSubscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)widgetBindService:(id)a0 context:(id)a1 container:(id)a2;

- (void)setPowerSaveClearType:(long long)a0;
- (void)addLynxEventSubscriber;
- (void)subscribeLynxEvents;
- (void)addPassthroughParams:(id)a0;
- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)p_showFissionCouponResult:(id)a0;
- (void)widgetDidAppear;
- (void)p_loginWithCompletion:(id /* block */)a0;
- (void)widgetUnmount;
- (void)messageReceived_IESECLivePopMessage:(id)a0;
- (void)liveContext:(id)a0 openSchemeWithAction:(id)a1 completion:(id /* block */)a2;
- (void)liveContext:(id)a0 showDialogWithAction:(id)a1 completion:(id /* block */)a2;
- (void)liveContext:(id)a0 openListShowDialogWithAction:(id)a1 completion:(id /* block */)a2;
- (void)liveContext:(id)a0 liveGuideWithAction:(id)a1 completion:(id /* block */)a2;
- (void)liveContext:(id)a0 liveReportLogWithAction:(id)a1 completion:(id /* block */)a2;
- (void)liveContext:(id)a0 showToastWithAction:(id)a1 completion:(id /* block */)a2;
- (void)liveContext:(id)a0 addCart:(id)a1 completion:(id /* block */)a2;
- (void)registerAtomicBasicAbility;
- (void)setClickWithType:(id)a0 extra:(id)a1;
- (void)forceLoginWithUserInfo:(id)a0 completion:(id /* block */)a1;
- (id)getLiveLoginContextWithUserInfo:(id)a0;
- (void)reportLivePerfWithPerfKey:(id)a0 value:(BOOL)a1;
- (void)setupShopCartControl;
- (void)registerLazyDIAbility;
- (void)subscribeLynxJumpByClickEvent;
- (void)appendBCMParams;
- (void)unsubscribeLynxEvents;
- (void)processBusinessParamsIfNeeded;
- (void)showLotterySuccessView:(id)a0;
- (void)showAuctionSuccessView:(id)a0;
- (void)showAuctionV2SuccessView:(id)a0;
- (void)cpsTrackWithContent:(id)a0;
- (void)quietAllowDisclaimer:(BOOL)a0;
- (void)processEcomLiveWatchTask;
- (void)p_openSchemaAlertView:(id)a0;
- (void)showFissionCouponResult:(id)a0;
- (void)updateECommercePerfKey:(id)a0 withValue:(BOOL)a1;
- (void)widgetRefresh;
- (void)didShowShopCart:(BOOL)a0;
- (void)didHideShopCart:(BOOL)a0;
- (void)beginHandleAfterEnterRoom;
- (void)endHandleAfterEnterRoom;
- (void)widgetDidDisappear;
- (void)messageReceived_IESECLiveMarketingMessage:(id)a0;
- (void)messageReceived_IESECAuctionUpdateMessage:(id)a0;
- (id)getPitayaSmartRelatedDictWithArray:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end

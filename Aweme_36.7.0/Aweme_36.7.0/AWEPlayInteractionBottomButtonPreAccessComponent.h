@class AWEPageContext, AWEEntertainmentMultipleEventsView, AWEPlayInteractionContext, NSString, AWEPlayInteractionBottomButtonPreAccessView, AWECommonButtonInfoModel, AWEPaymentEventHandler;
@protocol AWEPlayInteractionBottomButtonContextProtocol, AWEPlayInteractionBottomButtonComponentDelegateProtocol;

@interface AWEPlayInteractionBottomButtonPreAccessComponent : NSObject <AWEPaymentEventHandlerDelegate, AWEPlayInteractionBottomButtonComponentProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWEPlayInteractionBottomButtonPreAccessView *containerView;
@property (retain, nonatomic) AWEEntertainmentMultipleEventsView *multipleEventsView;
@property (retain, nonatomic) AWEPaymentEventHandler *paymentEventHandler;
@property (copy, nonatomic) NSString *preAccessPopupSchema;
@property (nonatomic) BOOL appear;
@property (nonatomic) BOOL hasReportTry;
@property (nonatomic) BOOL hasReportTryEnd;
@property (nonatomic) BOOL hasReportStatusChange;
@property (nonatomic) BOOL hasLaunchAutoUnlock;
@property (nonatomic) double clickTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long avoidStatus;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionBottomButtonContextProtocol> *btnContext;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentDelegateProtocol> componentDelegate;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (void)hideBottomButton;
- (id)initWithModel:(id)a0 context:(id)a1;
- (long long)activateType;
- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (id)pageCommonParams;
- (void)handlePayEvent:(id)a0;
- (void)checkStatusWithPlayBackTime:(double)a0;
- (void)showBottomButton;
- (BOOL)needsShow;
- (BOOL)needBlockAutoUnlock;
- (void)handleSingleBtnChangeAutoUnlockRewardEvent:(long long)a0;
- (void)handleAutoUnlockRewardEvent:(long long)a0;
- (void)sendEventToFeed:(id)a0 object:(id)a1;
- (void)setupPaymentEventHandler;
- (void)refreshButtonUIInfo:(BOOL)a0;
- (void)unlockVideo;
- (void)handleClickEventWithEvent:(id)a0;
- (void)cancelAutoUnlock:(BOOL)a0;
- (void)trackIAAContentButtonShow;
- (void)trackIAAContentLeftButtonShow;
- (void)trackIAAContentButtonClickWithAutoOpen:(BOOL)a0;
- (void)resetAutoUnlockWithAnimated:(BOOL)a0;
- (void)trackIAAContentLeftButtonClick;
- (id)trackCommonParamsWithButtonIndex:(long long)a0;
- (void)trackIAAContentButtonShowForTryWatchStatus;
- (id)paymentContainerID;
- (id)getAutoUnlockParams;
- (long long)currentTryWatchStatus;
- (BOOL)showingProductCard;
- (id)getUnlockButtonText;
- (void)openPreAccessNotification:(id)a0;
- (void)openPreAccessPanelWithSchema:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (id)buttonView;

@end

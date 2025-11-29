@class BDXBridgeEventSubscriber, NSString;
@protocol AWEPaidStreamControlProtocol;

@interface AWEPlayInteractionIAAPaidStreamController : AWEPlayInteractionBaseController <AWEPaidStreamControlDelegate>

@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (nonatomic) unsigned long long didAcquireCount;
@property (retain, nonatomic) BDXBridgeEventSubscriber *openADContainerSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayerDidReadyForDisplay:(id)a0;
- (BOOL)usePaidStream:(id)a0;
- (BOOL)usePaidStreamPreventScreenRecord;
- (void)paidStreamTrialDidFinish:(long long)a0 reason:(unsigned long long)a1;
- (void)paidStreamDidUpdatePaidInfoWithPaidInfoItems:(id)a0;
- (id)commonParametersForPaidStreamWithScene:(long long)a0;
- (id)requestParametersForPaidStreamWithScene:(long long)a0;
- (void)actionForBlockWithCompletionHandler:(id /* block */)a0;
- (id)playerViewControllerForSecurity;
- (double)currentPlayProgressWithScene:(long long)a0;
- (void)paidStreamLoadPaymentPageSuccess:(BOOL)a0;
- (void)paidStreamDidAcquireRightsWithScene:(long long)a0 paymentType:(long long)a1 rights:(id)a2 extraInfo:(id)a3;
- (void)paidStreamDidAcquireRights:(id)a0 scene:(long long)a1 paymentType:(long long)a2 extraInfo:(id)a3;
- (void)paidStreamDidAppearPaymentPage;
- (void)paidStreamWillExitPaymentPage;
- (void)paidStreamDidExitPaymentPage;
- (void)trackEvent:(id)a0 awemeModel:(id)a1 parameters:(id)a2;
- (double)offsetFromCenter;
- (BOOL)shouldForbidFixingContinuePlayIssues;
- (void)openIAARewardADContainerFromLandscapeNotification:(id)a0;
- (void)sendEventToFeed:(id)a0 object:(id)a1;
- (void)setupEvents;
- (id)createPaidStreamForAwemeModel:(id)a0;
- (void)preparePaidStreamForAwemeModel:(id)a0;
- (void)unsubscribeOpenADContainerSubscriber;
- (void)openRewardVideoContainerWithParams:(id)a0;
- (void)autoSlideOpenRewardContainer;
- (void)subscribeOpenADContainerSubscriber;
- (void)openIAARewardContainerFromNotification:(id)a0;
- (BOOL)shouldInitIAARewardManager;
- (void)handleLoginEvent;
- (id)paidStreamConfigExtraInfo;
- (id)getTrackParamsFromFE;
- (BOOL)isJumpInnerFeedSceneValid:(id)a0;
- (id)trafficInvestParamJsonString:(id)a0;
- (void)refreshMixVideoFeed:(id)a0;
- (void)refreshPlayletVideoFeed:(id)a0;
- (void)refreshCurrentAwemeAfterLogin:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)willDisplay;

@end

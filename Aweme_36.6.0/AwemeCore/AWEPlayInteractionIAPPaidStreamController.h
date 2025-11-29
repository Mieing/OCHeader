@class BDXBridgeEventSubscriber, AWEBinding, NSString;
@protocol AWEPaidStreamControlProtocol;

@interface AWEPlayInteractionIAPPaidStreamController : AWEPlayInteractionBaseController <AWEPaidStreamControlDelegate, AWEShowBillPageManagerDelegate>

@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (nonatomic) BOOL paidStreamHasReady;
@property (retain, nonatomic) AWEBinding *paidStreamBinding;
@property (retain, nonatomic) BDXBridgeEventSubscriber *openADContainerSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handlePayEvent:(id)a0;
- (BOOL)usePaidStream:(id)a0;
- (void)preparePaidStream;
- (BOOL)usePaidStreamPreventScreenRecord;
- (long long)indexForInsertBlockViewWithScene:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })blockViewFrameForPaidStreamWithScene:(long long)a0;
- (id)trialContainerViewForPaidStreamWithScene:(long long)a0;
- (id)commonParametersForPaidStreamWithScene:(long long)a0;
- (id)playerViewControllerForSecurity;
- (void)paidStreamDidAcquireRightsWithScene:(long long)a0 paymentType:(long long)a1 rights:(id)a2 extraInfo:(id)a3;
- (double)offsetFromCenter;
- (id)getRecType:(id)a0;
- (void)sendEventToFeed:(id)a0 object:(id)a1;
- (void)unsubscribeOpenADContainerSubscriber;
- (void)subscribeOpenADContainerSubscriber;
- (id)trailCommonParameters;
- (id)trackIAAParametersWithOtherPrams:(id)a0;
- (id)trackPaymentPageParameters;
- (id)showTrackerDic;
- (void)openPaymentPageWithSchema:(id)a0 params:(id)a1;
- (void)openPaymentPageWithDictionary:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)containerID;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)willDisplay;

@end

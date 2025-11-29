@class NSString, UIView;
@protocol AWEVideoTryWatchViewProtocol, AWEPaidStreamControlProtocol;

@interface AWERVPaymentTryWatchController : AWEVideoPlayControlBaseController <AWEPaidStreamControlDelegate>

@property (retain, nonatomic) UIView<AWEVideoTryWatchViewProtocol> *paymentTryWatchView;
@property (nonatomic) BOOL hasTrackPaymentTryWatchView;
@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (nonatomic) BOOL hasTrackTrialEnd;
@property (nonatomic) BOOL hasTrackShowPaymentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (id)trackCommonParams;
- (BOOL)shouldResponseTapGesture:(id)a0;
- (void)bindEvents;
- (BOOL)usePaidStreamControl;
- (BOOL)usePaidStreamPreventScreenRecord;
- (void)paidStreamTrialRemainingTimeChangeTo:(double)a0 totalTimeInterval:(double)a1 scene:(long long)a2;
- (void)paidStreamWillDisplayForBlockType:(unsigned long long)a0 scene:(long long)a1;
- (long long)indexForInsertBlockViewWithScene:(long long)a0;
- (id)trialContainerViewForPaidStreamWithScene:(long long)a0;
- (void)actionForBlockWithCompletionHandler:(id /* block */)a0;
- (id)playerViewControllerForSecurity;
- (void)addPaymentTryWatchViewIfNeeded;
- (void)preparePaidStreamIfNeeded;
- (void)trackTrialEndIfNeeded;
- (void)trackClickPaymentView;
- (void)trackShowPaymentViewIfNeeded;
- (BOOL)shouldShowPaymentTryWatchView;
- (void)trackClickPaymentTryWatchView;
- (void)setupPaymentTryWatchView;
- (void)updatePaymentTryWatchViewWithCurrentTime:(double)a0;
- (void)trackShowPaymentTryWatchViewIfNeeded;
- (void)updatePaymentTryWatchLayout;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end

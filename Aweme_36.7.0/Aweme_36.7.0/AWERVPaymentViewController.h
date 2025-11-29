@class AWERVDetailPageContext, UIView;
@protocol AWELandscapePaymentViewProtocol;

@interface AWERVPaymentViewController : AWEVideoPlayControlBaseController

@property (retain, nonatomic) UIView<AWELandscapePaymentViewProtocol> *paymentView;
@property (readonly, nonatomic) AWERVDetailPageContext *pageContext;
@property (nonatomic) BOOL hasTrackTrialEnd;
@property (nonatomic) BOOL hasTrackShowPaymentView;
@property (nonatomic) BOOL isAppearValueChange;

- (void)setHide:(BOOL)a0;
- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)setAppear:(BOOL)a0;
- (BOOL)shouldResponseTapGesture:(id)a0;
- (void)bindEvents;
- (BOOL)usePaidStreamControl;
- (void)trackTrialEndIfNeeded;
- (void)trackClickPaymentView;
- (void)trackShowPaymentViewIfNeeded;
- (void)addPaymentViewIfNeeded;
- (void)updatePaymentViewWithCurrentTime:(double)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;

@end

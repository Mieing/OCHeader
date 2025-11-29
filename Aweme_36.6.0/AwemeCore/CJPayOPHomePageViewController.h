@class CJPayOPHomeContentView, CJPayCombinationPaymentViewController, NSDictionary, CJPayBizChoosePayMethodViewController, CJPayDefaultChannelShowConfig, NSMutableArray;

@interface CJPayOPHomePageViewController : CJPayHomePageViewController

@property (retain, nonatomic) CJPayOPHomeContentView *outerPayHomeContentView;
@property (retain, nonatomic) CJPayCombinationPaymentViewController *combinePayViewController;
@property (retain, nonatomic) CJPayBizChoosePayMethodViewController *choosePayMethodVC;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentPayConfig;
@property (readonly, nonatomic, getter=isSendToCombinePaymentVC) BOOL isSendToCombinePaymentVC;
@property (nonatomic) BOOL isViewDidAppear;
@property (retain, nonatomic) NSMutableArray *notSufficientFundIdsInCombinePay;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL isColdLaunch;
@property (copy, nonatomic) NSDictionary *outerTrackParams;

- (id)getCurrentContentView;
- (void)didSelectAtIndex:(int)a0;
- (void)showState:(long long)a0;
- (void)p_bindCardSuccess;
- (void)updateOrderResponse:(id)a0;
- (void)notifyNotsufficient:(id)a0;
- (void)changePayMethodTo:(id)a0;
- (id)outerPayTrackParams;
- (void)combinePayWithType:(unsigned long long)a0;
- (void)didClickBannerWithType:(unsigned long long)a0;
- (BOOL)isSecondaryCellView:(unsigned long long)a0;
- (void)p_notifyHomeVCAndChooseVCNotSufficientWithResponse:(id)a0 error:(id)a1 bankCardId:(id)a2;
- (void)p_tryInsertChooseViewControllerWithNotSufficientID:(id)a0;
- (void)p_gotoCombinationPaymentType:(unsigned long long)a0;
- (void)onConfirmPayAction;
- (void)setupNavigatinBar;
- (void)updatePayTypeView;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)back;

@end

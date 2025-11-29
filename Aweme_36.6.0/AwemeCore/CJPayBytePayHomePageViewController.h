@class CJPayCombinationPaymentViewController, CJPayBizChoosePayMethodViewController, CJPayDefaultChannelShowConfig, NSMutableArray;

@interface CJPayBytePayHomePageViewController : CJPayHomePageViewController

@property (retain, nonatomic) CJPayCombinationPaymentViewController *combinePayViewController;
@property (retain, nonatomic) CJPayBizChoosePayMethodViewController *choosePayMethodVC;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentPayConfig;
@property (readonly, nonatomic, getter=isSendToCombinePaymentVC) BOOL isSendToCombinePaymentVC;
@property (retain, nonatomic) NSMutableArray *notSufficientFundIdsInCombinePay;

- (id)getCurrentContentView;
- (void)didSelectAtIndex:(int)a0;
- (void)showState:(long long)a0;
- (void)p_bindCardSuccess;
- (void)updateOrderResponse:(id)a0;
- (void)notifyNotsufficient:(id)a0;
- (void)changePayMethodTo:(id)a0;
- (void)combinePayWithType:(unsigned long long)a0;
- (void)didClickBannerWithType:(unsigned long long)a0;
- (void)didChangeCreditPayInstallment:(id)a0;
- (void)didSelectNewCustomerSubCell:(long long)a0;
- (void)updateAmountViewByShowConfig:(id)a0;
- (BOOL)isSecondaryCellView:(unsigned long long)a0;
- (void)p_notifyHomeVCAndChooseVCNotSufficientWithResponse:(id)a0 error:(id)a1 bankCardId:(id)a2;
- (void)p_tryInsertChooseViewControllerWithNotSufficientID:(id)a0;
- (void)p_gotoCombinationPaymentType:(unsigned long long)a0;
- (void)onConfirmPayAction;
- (void)setupNavigatinBar;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;

@end

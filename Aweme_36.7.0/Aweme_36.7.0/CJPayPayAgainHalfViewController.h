@class CJPayBaseVerifyManager, NSMutableDictionary, CJPayHintInfo, CJPayPayAgainCombinationPaymentViewController, CJPayChooseDyPayMethodManager, CJPayPayAgainViewModel, CJPayBDCreateOrderResponse, NSDictionary, CJPayPayAgainChoosePayMethodViewController, CJPayOrderConfirmResponse, NSString, CJPayPayAgainHalfView, NSAttributedString;
@protocol CJPayPayAgainDelegate;

@interface CJPayPayAgainHalfViewController : CJPayHalfPageBaseViewController <CJPayPayAgainChoosePayMethodDelegate, CJPayPayAgainCombineChoosePayMethodDelegate, CJPayChooseDyPayMethodDelegate, CJPayBaseLoadingProtocol>

@property (retain, nonatomic) CJPayPayAgainHalfView *notSufficientView;
@property (retain, nonatomic) CJPayPayAgainViewModel *viewModel;
@property (retain, nonatomic) CJPayPayAgainCombinationPaymentViewController *ecommerceCombineViewController;
@property (weak, nonatomic) CJPayPayAgainChoosePayMethodViewController *chooseVC;
@property (copy, nonatomic) NSAttributedString *buttonTitle;
@property (retain, nonatomic) CJPayChooseDyPayMethodManager *chooseDyPayMethodManager;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createOrderResponse;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (retain, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (retain, nonatomic) CJPayHintInfo *hintInfo;
@property (retain, nonatomic) NSMutableDictionary *payDisabledFundID2ReasonMap;
@property (weak, nonatomic) id<CJPayPayAgainDelegate> delegate;
@property (copy, nonatomic) NSDictionary *extParams;
@property (nonatomic) BOOL isSuperPay;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)useCloseBackBtn;
- (void)p_confirmButtonClicked;
- (id)getPayDisabledReasonMap;
- (void)p_trackerWithEventName:(id)a0 params:(id)a1;
- (void)p_superBack;
- (void)p_gotoCardList;
- (void)didChangeCreditPayInstallment:(id)a0;
- (void)p_gotoCombinationPaymentType:(unsigned long long)a0;
- (void)changeCombinedBankPayMethod:(id)a0 loadingView:(id)a1;
- (void)changePayMethod:(id)a0 loadingView:(id)a1;
- (void)pushChoosePayMethodVC:(id)a0 animated:(BOOL)a1;
- (id)payContextExtParams;
- (void)trackerWithEventName:(id)a0 params:(id)a1;
- (BOOL)shouldShowRetainVC;
- (void)didClickMethodCell:(id)a0 channelBizModel:(id)a1;
- (void)didClickCombineMethodCell:(id)a0 channelBizModel:(id)a1;
- (void)p_back:(BOOL)a0;
- (id)p_getNavTitle;
- (unsigned long long)p_getStyleFromCashierTag;
- (id)p_getDiscountLabel;
- (void)p_didSelectTracker;
- (void)p_trackerMethodListEventName:(id)a0 params:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (void)back;

@end

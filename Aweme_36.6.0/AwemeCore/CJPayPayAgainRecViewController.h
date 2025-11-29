@class CJPayBaseVerifyManager, NSMutableDictionary, CJPayPayAgainViewModel, CJPayChooseDyPayMethodManager, NSDictionary, CJPayBDCreateOrderResponse, CJPayPayAgainDisplayInfo, CJPayPayAgainMainView, CJPayOrderConfirmResponse, NSString, NSAttributedString, NSArray, CJPayPayAgainErrorDescView, CJPayDefaultChannelShowConfig, CJPayPayAgainMainViewModel;
@protocol CJPayPayAgainDelegate;

@interface CJPayPayAgainRecViewController : CJPayHalfPageBaseViewController <CJPayChooseDyPayMethodDelegate, CJPayBaseLoadingProtocol>

@property (retain, nonatomic) CJPayPayAgainMainView *mainView;
@property (retain, nonatomic) CJPayChooseDyPayMethodManager *chooseDyPayMethodManager;
@property (retain, nonatomic) CJPayPayAgainErrorDescView *errorDescView;
@property (retain, nonatomic) CJPayPayAgainMainViewModel *mainViewData;
@property (retain, nonatomic) CJPayPayAgainDisplayInfo *payAgainInfo;
@property (nonatomic) unsigned long long mainViewStatus;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *payFailConfig;
@property (nonatomic) BOOL methodCountGreaterThanRec;
@property (nonatomic) BOOL hasChangeDefaultConfig;
@property (copy, nonatomic) NSArray *recMethodList;
@property (copy, nonatomic) NSAttributedString *lastConfirmBtnText;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createOrderResponse;
@property (retain, nonatomic) CJPayOrderConfirmResponse *confirmResponse;
@property (retain, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (retain, nonatomic) CJPayPayAgainViewModel *viewModel;
@property (retain, nonatomic) NSMutableDictionary *payDisabledFundID2ReasonMap;
@property (weak, nonatomic) id<CJPayPayAgainDelegate> delegate;
@property (copy, nonatomic) NSDictionary *extParams;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)p_confirmButtonClicked;
- (id)getPayDisabledReasonMap;
- (void)p_trackWhenRecMainViewAppear;
- (void)p_trackClickEventWithBtnName:(id)a0 params:(id)a1;
- (void)p_trackPayAgainEventName:(id)a0 params:(id)a1;
- (BOOL)p_shouldShowRetainVC;
- (void)p_setMainViewOriginStatus;
- (void)p_switchToStatus:(unsigned long long)a0;
- (void)p_updateDefaultConfig:(id)a0;
- (id)p_createMainViewModel;
- (void)p_switchToStatus:(unsigned long long)a0 needSortMethod:(BOOL)a1;
- (void)p_clickMethodInMainView:(id)a0 loadingView:(id)a1;
- (void)p_didSelectedShowConfig:(id)a0 loadingView:(id)a1;
- (id)p_trackAllMethodList;
- (BOOL)p_isDiscountNotAvailable;
- (void)p_superBack;
- (void)changeCombinedBankPayMethod:(id)a0 loadingView:(id)a1;
- (void)changePayMethod:(id)a0 loadingView:(id)a1;
- (void)pushChoosePayMethodVC:(id)a0 animated:(BOOL)a1;
- (id)payContextExtParams;
- (void)p_handleQueryPayTypeData;
- (void)p_trackWhenExplainViewAppear;
- (void)p_updateMainViewUnfoldStatus;
- (void)p_gotoMethodListPageFromCombinedPay:(BOOL)a0;
- (BOOL)p_isConfigCanUpdateImmediately:(id)a0;
- (BOOL)p_isConfigWillSwitchCombinePay:(id)a0;
- (void)p_tradeCreateAgainWithLoadingView;
- (BOOL)p_isConfigNeedTradeCreateWhenClick:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)viewDidLoad;
- (double)containerHeight;
- (void)back;

@end

@class CJPayBDOrderResultResponse, NSError, CJPayProcessInfo, CJPayButton, NSDictionary, CJPayBalanceResultPromotionView, CJPayAccountInsuranceTipView, UIView, UIScrollView, NSString, CJPayMerchantInfo, CJPayWithDrawResultArrivingView, CJPayWithDrawResultViewModel, CJPayLoopView, CJPayBannerResponse, CJPayWithDrawResultHeaderView, CJPayIndicatorView, UIImageView;

@interface CJPayWithDrawResultViewController : CJPayThemeBaseViewController <CJPayLoopViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) CJPayWithDrawResultHeaderView *headerView;
@property (retain, nonatomic) CJPayWithDrawResultArrivingView *arrivingView;
@property (retain, nonatomic) CJPayWithDrawResultViewModel *viewModel;
@property (retain, nonatomic) CJPayLoopView *loopView;
@property (retain, nonatomic) CJPayIndicatorView *indicatorView;
@property (retain, nonatomic) CJPayButton *completeButton;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIView *bottomBackView;
@property (copy, nonatomic) NSString *tradeStatusDescString;
@property (retain, nonatomic) CJPayBalanceResultPromotionView *promotionView;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) CJPayBannerResponse *bannerResponse;
@property (nonatomic) int orderNum;
@property (copy, nonatomic) NSString *tradeNo;
@property (retain, nonatomic) CJPayMerchantInfo *merchant;
@property (copy, nonatomic) NSDictionary *withdrawResultPageDescDict;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (retain, nonatomic) CJPayBDOrderResultResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) CJPayProcessInfo *processInfo;
@property (copy, nonatomic) NSDictionary *preOrderTrackInfo;
@property (copy, nonatomic) id /* block */ closeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestDataWithMerchantInfo:(id)a0 tradeNo:(id)a1 processInfo:(id)a2 completion:(id /* block */)a3;

- (void)reloadCurrentView;
- (BOOL)cjAllowTransition;
- (void)p_trackerWithEventName:(id)a0 params:(id)a1;
- (void)p_queryBanner:(long long)a0;
- (void)loopView:(id)a0 bannerAppearAtIndex:(unsigned long long)a1 atPage:(unsigned long long)a2;
- (void)p_updatePromotionView;
- (void)p_updateBanners;
- (void)p_queryBannerResponse:(long long)a0 completion:(id /* block */)a1;
- (void)p_bannerClick:(id)a0;
- (void)completeButtonClick;
- (void)updateDataWithError:(id)a0 response:(id)a1;
- (id)getStatusName:(id)a0;
- (id)p_getStatusName:(id)a0;
- (void)p_goToErrorExplanationPage;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)back;

@end

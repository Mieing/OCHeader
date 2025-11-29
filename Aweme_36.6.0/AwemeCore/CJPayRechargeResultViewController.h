@class UILabel, CJPayButton, NSDictionary, CJPayBalanceResultPromotionView, CJPayAccountInsuranceTipView, UIView, CJPayRechargeResultMainView, CJPayMerchantInfo, UIScrollView, CJPayRechargeResultPayInfoView, NSString, CJPayLoopView, CJPayBannerResponse, CJPayBDTradeInfo, CJPayBDOrderResultResponse, UIImageView;

@interface CJPayRechargeResultViewController : CJPayThemeBaseViewController <CJPayLoopViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) CJPayRechargeResultMainView *mainView;
@property (retain, nonatomic) CJPayRechargeResultPayInfoView *payInfoView;
@property (retain, nonatomic) CJPayLoopView *loopView;
@property (retain, nonatomic) CJPayBalanceResultPromotionView *promotionView;
@property (retain, nonatomic) CJPayButton *completeButton;
@property (retain, nonatomic) UILabel *serviceTipsLabel;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) CJPayBannerResponse *bannerResponse;
@property (retain, nonatomic) CJPayMerchantInfo *merchant;
@property (retain, nonatomic) CJPayBDTradeInfo *tradeInfo;
@property (nonatomic) long long closeAfterTime;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (retain, nonatomic) CJPayBDOrderResultResponse *response;
@property (copy, nonatomic) NSDictionary *preOrderTrackInfo;
@property (copy, nonatomic) id /* block */ closeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cjAllowTransition;
- (void)p_makeConstraints;
- (void)p_trackerWithEventName:(id)a0 params:(id)a1;
- (void)p_queryBanner:(long long)a0;
- (void)p_updatePayInfo;
- (void)loopView:(id)a0 bannerAppearAtIndex:(unsigned long long)a1 atPage:(unsigned long long)a2;
- (id)p_payInfoModel:(id /* block */)a0;
- (void)p_updatePromotionView;
- (void)p_updateBanners;
- (void)p_queryBannerResponse:(long long)a0 completion:(id /* block */)a1;
- (void)p_bannerClick:(id)a0;
- (void)completeButtonClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)back;

@end

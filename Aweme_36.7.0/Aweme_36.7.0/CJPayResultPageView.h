@class UIStackView, UIView, NSString, CJPayFullResultCardView, CJPayBDCreateOrderResponse, CJPayBDOrderResultResponse, CJPayCombinePayDetailView, CJPayAccountInsuranceTipView, CJPayButton, UILabel;
@protocol CJPayResultPageViewDelegate;

@interface CJPayResultPageView : UIView <CJPayLynxViewDelegate>

@property (retain, nonatomic) CJPayCombinePayDetailView *combinePayDetailView;
@property (retain, nonatomic) UIStackView *signDetailView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) CJPayFullResultCardView *payBannerView;
@property (retain, nonatomic) CJPayButton *backToMerchantButton;
@property (retain, nonatomic) UILabel *detailDescLabel;
@property (retain, nonatomic) UILabel *discountLabel;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) CJPayBDOrderResultResponse *resultResponse;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *createOrderResponse;
@property (weak, nonatomic) id<CJPayResultPageViewDelegate> delegate;
@property (nonatomic) long long resultPageType;
@property (copy, nonatomic) id /* block */ updateResultPageViewHeightBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (void)updateBannerContentWithModel:(id)a0 benefitStr:(id)a1 tradeNo:(id)a2;
- (BOOL)p_isCombinePay;
- (void)hideSafeGuard;
- (id)initWithResultResponse:(id)a0 createOrderResponse:(id)a1;
- (void)p_setDetailUIAndText;
- (void)p_updateDiscountText:(id)a0 payTypeDescText:(id)a1;
- (void)p_showBackToMerchantBtn;
- (void)p_tapBtmButton:(id)a0;
- (void)p_updateContainerViewHeight;
- (void)p_updateCombinePayDetailWithAssetFund:(id)a0;
- (void)p_updateCombinePayDetail:(id)a0;
- (void)p_showCombinePay;
- (void)p_showSignDetail;
- (void)p_showPayBanner;
- (id)p_buildCommonModelWithGuideModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

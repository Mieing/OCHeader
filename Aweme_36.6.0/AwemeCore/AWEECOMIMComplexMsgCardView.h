@class AWEECOMIMCardComponenetProductItemsView, AWEECOMIMComplexMemberContainer, AWEECOMIMComplexThemeContainer, AWEECOMIMCardComponentCommonTitleView, AWEECOMIMComponentLabelView, UIView, AWEECOMIMCardComponentBgHeader, AWEECOMIMBaseContianerView, AWEECOMIMCardComponentOperationPanel, AWEECOMIMCardComponentSingleLabelView, UIStackView, NSString, AWEECOMIMComplexProductContainer;

@interface AWEECOMIMComplexMsgCardView : AWEECOMIMCardBaseView <AWEECOMIMCardComponentCouponViewDelegate, AWEECOMIMMemberContentViewDelegate>

@property (retain, nonatomic) AWEECOMIMComplexThemeContainer *themeContainer;
@property (retain, nonatomic) AWEECOMIMComplexProductContainer *productContainer;
@property (retain, nonatomic) AWEECOMIMComplexMemberContainer *memberContainer;
@property (retain, nonatomic) AWEECOMIMBaseContianerView *couponContainer;
@property (retain, nonatomic) AWEECOMIMComponentLabelView *themeContentView;
@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *productTitleView;
@property (retain, nonatomic) AWEECOMIMCardComponentBgHeader *productHeaderView;
@property (retain, nonatomic) UIStackView *productStackView;
@property (retain, nonatomic) AWEECOMIMCardComponenetProductItemsView *productsView;
@property (retain, nonatomic) UIView *goodsContainer;
@property (retain, nonatomic) AWEECOMIMCardComponentSingleLabelView *productDescView;
@property (retain, nonatomic) AWEECOMIMCardComponentOperationPanel *productButtonView;
@property (retain, nonatomic) UIStackView *memberStackView;
@property (retain, nonatomic) UIStackView *couponStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithWidth:(double)a0 model:(id)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })cardPaddings;
+ (BOOL)isDynamicHeight;
+ (id)themeContentTextFont;
+ (id)themeContentTextColor;
+ (double)productContainerTopPadding;
+ (double)productContainerBottomPadding;

- (void)updateDynamicData;
- (void)componentCouponViewDidClickReceived:(id)a0 couponComponentView:(id)a1;
- (void)removeStackSubViews;
- (void)reloadGoodViewsWithItemsArr:(id)a0;
- (void)reloadMemberInfoViewWithMemberItemArr:(id)a0;
- (void)reloadCouponViewWithCouponItemArr:(id)a0;
- (void)updateSubviewCornerRadius;
- (void)refreshSubStackViewLayout;
- (void)memberContentView:(id)a0 didClickAction:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateData;
- (void)_customInit;

@end

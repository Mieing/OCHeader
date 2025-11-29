@class AWESearchAdProductView, AWEDoubleColumnSearchMerchandiseModel, UIView, UILabel, UIButton;

@interface AWESearchAdProductListCell : AWESearchCachalotECommerceBaseCell

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *searchMerchandiseModel;
@property (retain, nonatomic) AWESearchAdProductView *adProductView;
@property (retain, nonatomic) UIView *productInfoView;
@property (retain, nonatomic) UILabel *productTitle;
@property (retain, nonatomic) UIButton *adLearnMoreButton;
@property (nonatomic) BOOL isFromECommerce;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (long long)currentThemeStyle;
- (void)configWithModel:(id)a0;
- (void)configUI;
- (void)trackAdOtherShow;
- (void)recordDidEndDisplaying;
- (void)addCornerRadiusWithView:(id)a0 corners:(unsigned long long)a1 cornerRadii:(struct CGSize { double x0; double x1; })a2;
- (void)p_configUIInfoModel;
- (void)p_configProduct;
- (void)trackAdEndorseUserCard:(id)a0 refer:(id)a1;
- (void)openPageWithSearchShopInfo;
- (void)learnMoreButtonTap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)componentView;

@end

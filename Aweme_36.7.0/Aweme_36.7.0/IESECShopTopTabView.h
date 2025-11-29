@class CAGradientLayer, UIFont, UIColor, NSString, NSArray, IESECSlidingTabbarView;

@interface IESECShopTopTabView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) IESECSlidingTabbarView *tabbarView;
@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (readonly, nonatomic) unsigned long long style;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (copy, nonatomic) NSString *lightStyleTextColor;
@property (copy, nonatomic) NSString *indicatorColor;
@property (copy, nonatomic) UIColor *darkStyleIndicatorColor;
@property (copy, nonatomic) NSArray *tabStyleConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchIndicatorColor:(id)a0;
- (void)switchStyle:(unsigned long long)a0;
- (void)switchLightStyle;
- (void)switchDarkStyle;
- (void)switchPromotionLightStyle;
- (void)updateTitleAttribute:(id)a0 withValue:(id)a1;
- (void)updateSelectedTitleAttribute:(id)a0 withValue:(id)a1;
- (void)changeMaskLayerStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)setupViews;

@end

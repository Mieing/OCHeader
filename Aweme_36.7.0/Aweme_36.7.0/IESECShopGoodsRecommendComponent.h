@class CAGradientLayer, UIColor, IESECShopGoodsRecommendInfoView, UIImageView, UIView, NSString;
@protocol IESECShopTagListView;

@interface IESECShopGoodsRecommendComponent : UIView <UIGestureRecognizerDelegate, IESECLLComponent> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _cornerRadius;
    id /* block */ _clickComponentAction;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *bgGradientLayer;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESECShopGoodsRecommendInfoView *recommendInfoView;
@property (retain, nonatomic) UIImageView *textIcon;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (nonatomic) double iconHeight;
@property (retain, nonatomic) UIColor *arrowDefaultTintColor;
@property (retain, nonatomic) UIView<IESECShopTagListView> *recommendInfoTagListView;
@property (nonatomic) double recommendInfoTagListViewWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)recommend;
+ (id /* block */)recommendWithHeight:(double)a0 fontSize:(double)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 newFontColor:(BOOL)a3;
+ (id /* block */)recommendWithHeight:(double)a0 fontSize:(double)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 newFontColor:(BOOL)a3 iconHeight:(double)a4;
+ (id /* block */)recommendWithHeight:(double)a0 width:(double)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

- (void)updateUIWithModel:(id)a0;
- (void)didTapRecommendView;
- (void)updateBackgroundColors:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;

@end

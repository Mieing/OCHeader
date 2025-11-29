@class UIView, CAGradientLayer, AWESideBarFunctionBottomItemView;
@protocol AWESideBarFunctionGradientFooterViewDelegate;

@interface AWESideBarFunctionGradientFooterView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) AWESideBarFunctionBottomItemView *mainView;
@property (retain, nonatomic) UIView *optionalView;
@property (nonatomic) double horizontalPadding;
@property (weak, nonatomic) id<AWESideBarFunctionGradientFooterViewDelegate> delegate;

+ (double)viewHeight;

- (void)updateIconImageWithUrl:(id)a0;
- (void)updateOptionalView:(id)a0;
- (void)updateWithGradientColors:(id)a0;
- (void)updateHorizontalPadding:(double)a0;
- (void)p_loadMainButton;
- (void)onClickMainButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setBadgeHidden:(BOOL)a0;
- (void)updateLabelText:(id)a0;
- (void)setIconHidden:(BOOL)a0;

@end

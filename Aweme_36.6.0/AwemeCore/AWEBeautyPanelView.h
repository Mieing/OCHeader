@class AWEBeautyPanelViewConfig, UIVisualEffectView, UIView;

@interface AWEBeautyPanelView : UIView

@property (retain, nonatomic) AWEBeautyPanelViewConfig *config;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIView *bgView;

- (void)p_setupBgView;
- (void)p_updateCornerRadius;
- (void)p_setupBlurBackground;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;

@end

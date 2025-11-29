@class UIVisualEffectView, AWERecordBeautyPanelViewConfig, UIView;

@interface AWERecordBeautyPanelView : UIView

@property (retain, nonatomic) AWERecordBeautyPanelViewConfig *config;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;

- (void)p_setupBgView;
- (void)p_updateCornerRadius;
- (void)p_setupBlurBackground;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;

@end

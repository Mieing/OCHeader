@class ACCEditBeautyEffectPanelViewConfig, UIView;

@interface ACCEditBeautyEffectPanelView : UIView

@property (retain, nonatomic) ACCEditBeautyEffectPanelViewConfig *config;
@property (retain, nonatomic) UIView *bgView;

- (void)p_setupBgView;
- (void)p_updateCornerRadius;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;

@end

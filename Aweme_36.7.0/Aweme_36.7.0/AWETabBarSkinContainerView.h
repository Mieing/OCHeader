@class AWETabBarSkinView, AWETabBarSkinContainerViewParams;

@interface AWETabBarSkinContainerView : UIView

@property (copy, nonatomic) AWETabBarSkinContainerViewParams *params;
@property (retain, nonatomic) AWETabBarSkinView *darkSkinView;
@property (retain, nonatomic) AWETabBarSkinView *lightSkinView;
@property (nonatomic) BOOL isTransparent;

- (void)updateWithLightProgress:(double)a0;
- (void)updateWithParams:(id)a0;
- (void)p_loadDarkSkinView;
- (void)p_loadLightSkinView;
- (void)p_updateSkinHiddenState;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;

@end

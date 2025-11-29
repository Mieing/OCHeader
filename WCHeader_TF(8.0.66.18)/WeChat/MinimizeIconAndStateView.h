@class NSArray, UIView;

@interface MinimizeIconAndStateView : UIView

@property (retain, nonatomic) UIView *colorMaskView;
@property (retain, nonatomic) NSArray *icons;

+ (id)getIconMaskPath:(double)a0;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMaskColor:(id)a0;
- (void)setMaskColorAlpha:(double)a0;
- (void)makeSureColorMaskViewInited;
- (void)setRoundViewMaskPath:(double)a0 RoundView:(id)a1;
- (void)updateLoopIconList:(id)a0;
- (void)startSwitchingAnimation;
- (void).cxx_destruct;

@end

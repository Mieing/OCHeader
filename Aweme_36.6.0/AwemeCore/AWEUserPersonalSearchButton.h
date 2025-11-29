@class UIImageView, UIView;

@interface AWEUserPersonalSearchButton : UIButton

@property (retain, nonatomic) UIImageView *whiteImageView;
@property (retain, nonatomic) UIImageView *darkImageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *accessView;

- (void)updateAlpha:(double)a0;
- (void)followThemeMode;
- (void)showWhiteImage;
- (void)p_changeImageAccordingToThemeMode;
- (BOOL)isLightMode;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

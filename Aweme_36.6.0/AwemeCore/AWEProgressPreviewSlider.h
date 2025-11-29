@class UIView;

@interface AWEProgressPreviewSlider : UIView

@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *playedView;
@property (nonatomic) double lastPlayTime;

- (void)updatePlayTime:(double)a0 totalTime:(double)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end

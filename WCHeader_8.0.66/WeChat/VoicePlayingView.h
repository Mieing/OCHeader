@class UIImageView;

@interface VoicePlayingView : UIView

@property (retain, nonatomic) UIImageView *imageView1;
@property (retain, nonatomic) UIImageView *imageView2;
@property (retain, nonatomic) UIImageView *imageView3;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long animationRepeatCount;
@property (nonatomic) float speed;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
- (void)layoutSubviews;
- (BOOL)isAnimating;
- (void)startAnimating;
- (void)stopAnimating;
- (void).cxx_destruct;

@end

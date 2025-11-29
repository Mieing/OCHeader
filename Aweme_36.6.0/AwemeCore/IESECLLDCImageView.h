@class LOTAnimationView, IESECUIImageView;

@interface IESECLLDCImageView : UIView

@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) LOTAnimationView *lottieView;

- (void)updateWithImageModel:(id)a0;
- (void)updateWithURLModel:(id)a0 tintColor:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentMode:(long long)a0;
- (void)setupUI;

@end

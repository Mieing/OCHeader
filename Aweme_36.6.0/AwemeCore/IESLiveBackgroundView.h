@class UIImageView, UIVisualEffectView;

@interface IESLiveBackgroundView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) long long style;

- (void)createImageView;
- (id)initWithBlurStyle:(long long)a0;
- (void)createEffectViewWithBlurStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end

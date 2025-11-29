@class UIImageView;

@interface IESLLPOIFlashView : UIView

@property (nonatomic) double animationDuration;
@property (nonatomic) double animationDelay;
@property (retain, nonatomic) UIImageView *flashTag;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setupView;

@end

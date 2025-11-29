@class UIImageView;

@interface AWEDemaciaButton : UIButton

@property (nonatomic) double selectedAlpha;
@property (retain, nonatomic) UIImageView *imageContentView;

+ (id)buttonWithSelectedAlpha:(double)a0;
+ (id)imageButtonWithSelectedAlpha:(double)a0;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end

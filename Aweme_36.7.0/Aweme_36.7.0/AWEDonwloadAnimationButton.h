@class UIImage;

@interface AWEDonwloadAnimationButton : UIButton

@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *rotationImage;

- (void)rotateAnimation;
- (id)initWithNormalImage:(id)a0 rotationImage:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setSelected:(BOOL)a0;
- (id)init;

@end

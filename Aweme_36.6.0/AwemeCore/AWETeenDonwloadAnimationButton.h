@class NSString;

@interface AWETeenDonwloadAnimationButton : UIButton

@property (copy, nonatomic) NSString *normalImageName;
@property (copy, nonatomic) NSString *rotationImageName;

- (void)rotateAnimation;
- (id)initWithImageNamed:(id)a0 rotationImageName:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setSelected:(BOOL)a0;
- (id)init;

@end

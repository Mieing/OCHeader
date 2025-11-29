@class NSString;

@interface AWEPhotosPreviewDonwloadAnimationButton : UIButton

@property (copy, nonatomic) NSString *normalImageName;
@property (copy, nonatomic) NSString *rotationImageName;

- (void)rotateAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)setSelected:(BOOL)a0;
- (id)init;

@end

@interface AWEIMMessageAvatarImageView : UIImageView

@property (nonatomic) BOOL enableBlurImage;
@property (nonatomic) double blurRadius;

- (id)getGaussianBlurImageWithImage:(id)a0 blurRadius:(double)a1;
- (void)setImage:(id)a0;

@end

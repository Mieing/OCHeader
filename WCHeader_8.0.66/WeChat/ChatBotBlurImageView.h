@class UIImage;

@interface ChatBotBlurImageView : UIImageView

@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *blurredImage;
@property (nonatomic) BOOL blurEnabled;
@property (nonatomic) double blurRadius;

+ (id)applyBlurEffectInmage:(id)a0 blurRadius:(double)a1;

- (void)setImage:(id)a0;
- (void).cxx_destruct;

@end

@interface IESLLPOICropImageView : UIImageView

@property (nonatomic) double imageWidth;

- (void)addLeftCropWithRadius:(double)a0 centerPadding:(double)a1;
- (void)addRightCropWithRadius:(double)a0 centerPadding:(double)a1;

@end

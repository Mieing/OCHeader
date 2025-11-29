@interface MMUIImageView : UIImageView

@property (nonatomic) BOOL isTopAlignScaleImage;
@property (nonatomic) BOOL isCenterCropScaleImage;

- (void)setImage:(id)a0;
- (id)scaleImage:(id)a0;
- (id)topAlignScaleImage:(id)a0;
- (id)centerCropScaleImage:(id)a0;

@end

@class UIImage, UIImageView;

@interface BDSHImageComponent : BDSHViewComponent

@property (nonatomic) double blurRadius;
@property (retain, nonatomic) UIImage *content;
@property (retain, nonatomic) UIImageView *imageView;

+ (long long)p_getContentMode:(int)a0;

- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updateRenderWithType:(int)a0 value:(const void *)a1;
- (struct CGSize { double x0; double x1; })getImageContentSize;
- (void)applyBlur;
- (id)blurredImageWithImage:(id)a0 radius:(double)a1;
- (void).cxx_destruct;
- (id)contentView;
- (void)setImageUrl:(id)a0;

@end

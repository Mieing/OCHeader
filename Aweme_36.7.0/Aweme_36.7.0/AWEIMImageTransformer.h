@interface AWEIMImageTransformer : BDBaseTransformer

@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageCornerRadius;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;

@end

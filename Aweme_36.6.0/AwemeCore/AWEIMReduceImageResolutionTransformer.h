@interface AWEIMReduceImageResolutionTransformer : BDBaseTransformer

@property (nonatomic) struct CGSize { double width; double height; } limitImageSize;
@property (nonatomic) double rate;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 rate:(double)a1;

@end

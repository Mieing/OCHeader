@class YYMemoryCache;

@interface AWEIMImageTransformerManager : NSObject

@property (retain, nonatomic) YYMemoryCache *cachedTransformer;
@property (retain, nonatomic) YYMemoryCache *cachedTransformObject;

+ (id)__keyForRoundCornerRatio:(double)a0;
+ (id)__keyAlwaysTemplate;
+ (id)__keyForReduceImageResolutionTransformerWithSize:(struct CGSize { double x0; double x1; })a0 rate:(double)a1;
+ (id)__keyForImageSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
+ (id)sharedManager;

- (id)transformerWithAlwaysOriginal;
- (id)reduceImageResolutionTransformerWithSize:(struct CGSize { double x0; double x1; })a0 rate:(double)a1;
- (id)transformerWithRoundCornerRatio:(double)a0;
- (id)transformerWithAlwaysTemplete;
- (void).cxx_destruct;
- (id)init;

@end

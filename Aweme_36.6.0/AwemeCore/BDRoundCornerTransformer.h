@class UIColor;

@interface BDRoundCornerTransformer : BDBaseTransformer

@property (nonatomic) unsigned long long imageSize;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

+ (id)transformerWithImageSize:(unsigned long long)a0 borderWidth:(double)a1 borderColor:(id)a2;
+ (id)transformerMap;
+ (id)transformerWithImageSize:(unsigned long long)a0;
+ (id)defaultTransformer;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (BOOL)isAppliedToThumbnail;
- (void).cxx_destruct;

@end

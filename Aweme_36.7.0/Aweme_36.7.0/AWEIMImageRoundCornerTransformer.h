@interface AWEIMImageRoundCornerTransformer : BDBaseTransformer

@property (nonatomic) double roundCornerRatio;

+ (BOOL)enableCropUnexpectedSize;
+ (BOOL)enableTrackUnexpectedSize;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)__cropToSquareImageIfNecessaryWithOriginalImage:(id)a0;
- (id)initWithRoundCornerRatio:(double)a0;

@end

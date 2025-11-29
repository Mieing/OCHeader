@interface BDBaseTransformer : NSObject

@property (nonatomic) BOOL transformerPreprocessed;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)transformImageAfterStoreWithImage:(id)a0;
- (id)transformImageRecoder;
- (BOOL)isAppliedToThumbnail;
- (void)startPreprocessingWithDecoderConfig:(id)a0;
- (void)finishPreprocessingWithDecoderConfig:(id)a0;

@end

@protocol AWEWebImageTransformProtocol;

@interface AWEWebImageTransformer : BDBaseTransformer

@property (retain, nonatomic) id<AWEWebImageTransformProtocol> transformer;

+ (id)transformWithObject:(id)a0;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)transformImageAfterStoreWithImage:(id)a0;
- (id)transformImageRecoder;
- (BOOL)isAppliedToThumbnail;
- (void).cxx_destruct;

@end

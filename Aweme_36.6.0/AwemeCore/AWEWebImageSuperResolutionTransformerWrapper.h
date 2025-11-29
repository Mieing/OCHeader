@class BDSuperResolutionTransformer, NSString;

@interface AWEWebImageSuperResolutionTransformerWrapper : NSObject <AWEWebImageTransformProtocol>

@property (retain, nonatomic) BDSuperResolutionTransformer *bdTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)transformImageAfterStoreWithImage:(id)a0;
- (id)transformImageRecoder;
- (BOOL)isAppliedToThumbnail;
- (void)startPreprocessingWithDecoderConfig:(id)a0;
- (void)finishPreprocessingWithDecoderConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0;

@end

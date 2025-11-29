@class NSString, BDSharpTransformer;

@interface AWEWebImageSharpTransformerWrapper : NSObject <AWEWebImageTransformProtocol>

@property (retain, nonatomic) BDSharpTransformer *bdTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)transformImageAfterStoreWithImage:(id)a0;
- (id)transformImageRecoder;
- (BOOL)isAppliedToThumbnail;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

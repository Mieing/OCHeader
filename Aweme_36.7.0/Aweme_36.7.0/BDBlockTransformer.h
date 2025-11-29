@interface BDBlockTransformer : BDBaseTransformer

@property (copy, nonatomic) id /* block */ block;

+ (id)transformWithBlock:(id /* block */)a0;

- (id)appendingStringForCacheKey;
- (id)transformImageAfterStoreWithImage:(id)a0;
- (BOOL)isAppliedToThumbnail;
- (void).cxx_destruct;

@end

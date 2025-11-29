@class NSString, NSArray;

@interface AWEIMImageNestedTransformer : BDBaseTransformer

@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSArray *transformers;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransformers:(id)a0;

@end

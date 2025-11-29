@class IESLLTempoThreadSafeDictionary;

@interface IESLLTempoPreloadManager : NSObject

@property (retain, nonatomic) IESLLTempoThreadSafeDictionary *originTreeMapCache;
@property (retain, nonatomic) IESLLTempoThreadSafeDictionary *resourceModelCache;

+ (id)sharedInstance;

- (void)preFetchFontWithConfig:(id)a0 withResourceProvider:(id)a1;
- (id)getResourceModelWithURL:(id)a0;
- (void)__preloadWithURL:(id)a0 resourceProvider:(id)a1 complete:(id /* block */)a2;
- (id)getOriginTreeMapWithURL:(id)a0;
- (void)setCacheResourceModel:(id)a0 withURL:(id)a1;
- (void)setCacheOriginTreeMap:(id)a0 withURL:(id)a1;
- (void)prepareFontFaceWithOriginTree:(id)a0 resourceProvider:(id)a1;
- (void)predecodeExprWithAny:(id)a0 key:(id)a1;
- (void)preloadImgUrlWithOriginTreeMap:(id)a0;
- (void)predecodeExprWithDict:(id)a0;
- (void)predecodeExprWithArr:(id)a0;
- (id)getCacheKeyWithURL:(id)a0;
- (void)preloadWithURL:(id)a0 resourceProvider:(id)a1 complete:(id /* block */)a2;
- (void).cxx_destruct;
- (void)cleanCache;

@end

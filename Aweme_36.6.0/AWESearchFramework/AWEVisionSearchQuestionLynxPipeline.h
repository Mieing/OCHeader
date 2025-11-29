@class NSDictionary;

@interface AWEVisionSearchQuestionLynxPipeline : AWESearchCachalotLynxPipeline

@property (copy, nonatomic) NSDictionary *extraCommonParams;

- (id)customGlobalProps;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (id)getLynxSeparateRenderBlockList;
- (Class)getSeparateRenderConfigClass;
- (BOOL)enableDrawFromCacheOptimize;
- (BOOL)supportCustomGlobalProps;
- (void)lynxEngine:(id)a0 scrollElementToTopWithOffset:(double)a1 animated:(BOOL)a2 completionBlock:(id /* block */)a3;
- (id)getLynxReuseBlockList;
- (BOOL)visionSupportCardThemeGlobalProps;
- (void)preprocessDynamicPatch:(id)a0;
- (void)setupExtraCommonParams:(id)a0;
- (BOOL)appendScreenWidthGlobalProps;
- (void).cxx_destruct;

@end

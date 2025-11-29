@class NSDictionary;
@protocol AWESearchAIGCServiceProtocol;

@interface AWEVisionSearchCustomLynxPipeline : AWESearchCachalotLynxPipeline

@property (copy, nonatomic) NSDictionary *extraCommonParams;
@property (weak, nonatomic) id<AWESearchAIGCServiceProtocol> aigcService;

- (id)customGlobalProps;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (id)getLynxSeparateRenderBlockList;
- (BOOL)enableDrawFromCacheOptimize;
- (BOOL)supportCustomGlobalProps;
- (id)getLynxReuseBlockList;
- (BOOL)supportAsyncComponentViewSizeMeasure;
- (BOOL)blockLynxSeparateRenderForAsyncComponentViewSize;
- (BOOL)visionSupportCardThemeGlobalProps;
- (void)preprocessDynamicPatch:(id)a0;
- (void)setupExtraCommonParams:(id)a0;
- (BOOL)appendScreenWidthGlobalProps;
- (BOOL)enableVisionSearchLynxSeparateRender;
- (void).cxx_destruct;

@end

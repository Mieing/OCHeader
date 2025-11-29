@protocol AWESearchAIGCServiceProtocol;

@interface AWESearchCachalotGeneralWebPipeline : AWESearchCachalotWebPipeline

@property (weak, nonatomic) id<AWESearchAIGCServiceProtocol> aigcService;

+ (id)getPatchWithViewModel:(id)a0 stuffLog:(BOOL)a1;
+ (id)generateCellModelWithViewModel:(id)a0;
+ (void)mergeLogPb:(id)a0 viewModel:(id)a1;
+ (id)generateGeneralSearchModelWithViewModel:(id)a0;

- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (BOOL)universalReusePoolAllowViewModel:(id)a0;
- (BOOL)disablePreRenderViewModel:(id)a0;
- (void).cxx_destruct;

@end

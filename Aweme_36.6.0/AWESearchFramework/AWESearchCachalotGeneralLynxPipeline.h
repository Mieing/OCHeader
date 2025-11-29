@class NSString;
@protocol AWESearchAIGCServiceProtocol;

@interface AWESearchCachalotGeneralLynxPipeline : AWESearchCachalotLynxPipeline

@property (weak, nonatomic) id<AWESearchAIGCServiceProtocol> aigcService;
@property (copy, nonatomic) NSString *referString;

+ (BOOL)syncGetSearchGeneralCardAddLimitHeightAbility;
+ (id)generateCellModelWithViewModel:(id)a0;
+ (BOOL)shouldUseAnnieXWithViewModel:(id)a0 dynamicPatchModel:(id)a1;
+ (id)generateGeneralSearchModelWithViewModel:(id)a0 stuffLog:(BOOL)a1;
+ (BOOL)fixContainerWidthError;
+ (BOOL)enableRenderTypeFilterAtGenerateCellModel;
+ (BOOL)isPreLayoutFirst:(id)a0;
+ (BOOL)shouldUseMultiTASM:(id)a0;
+ (void)generatePrefetchResourceWithDataModel:(id)a0 generalSearchModel:(id)a1;
+ (void)mergeLogPb:(id)a0 viewModel:(id)a1;
+ (id)generatePrefetchImagesForEcomWithDataModel:(id)a0;
+ (BOOL)enableEcomImagePrefetch;

- (id)transformBusinessDataItem:(id)a0 ofDataType:(unsigned long long)a1;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (id)reuseIdentifierWithViewModel:(id)a0;
- (void)asyncComponentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1 sizeBlock:(id /* block */)a2;
- (BOOL)supportAsyncComponentViewSizeMeasureWithViewModel:(id)a0;
- (void)attachComponentView:(id)a0 usingViewModel:(id)a1;
- (BOOL)universalReusePoolAllowViewModel:(id)a0;
- (BOOL)disablePreRenderViewModel:(id)a0;
- (BOOL)doubleColumnExperienceOptimize;
- (BOOL)useTemplateBundle;
- (Class)getSeparateRenderConfigClass;
- (BOOL)supportCustomGlobalProps;
- (id)resolveDynamicPatchForLeafModels:(id)a0;
- (id)templateBundleLoadListBeforeRequest;
- (void)reportErrorInfo:(id)a0 controllerProxyError:(BOOL)a1;
- (void)p_updateComponentView:(id)a0 withViewModel:(id)a1 createCost:(double)a2;
- (id)fetchCellControllerWithComponet:(id)a0;
- (void)p_trackSearchDataBind:(id)a0 createDuration:(double)a1 bindDuration:(double)a2;
- (double)fixContainerWidthWithViewModel:(id)a0 width:(double)a1;
- (double)totalInjectViewHeightForViewModel:(id)a0 containerWidth:(double)a1;
- (void)syncModelSizeToComponentDataModel:(id)a0 size:(struct CGSize { double x0; double x1; })a1 containerWidth:(double)a2;
- (void)traceCellHeightCost:(double)a0 viewModel:(id)a1;
- (BOOL)fixQualityStyleWidth;
- (BOOL)enableRemoveModernFeedCellModelVerification;
- (BOOL)enableReportLynxRenderErrorInfo;
- (id)customGlobalPropsWithViewModel:(id)a0;
- (void).cxx_destruct;

@end

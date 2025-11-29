@class NSString;
@protocol AWESearchGeneralPipelinePreRenderProvider;

@interface AWESearchCachalotGeneralCardPipeline : AWESearchCachalotCardPipeline

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *adEventName;
@property (weak, nonatomic) id<AWESearchGeneralPipelinePreRenderProvider> preRenderProvider;
@property (nonatomic) BOOL shouldForceCallSuperComponentViewWithViewModelMethod;

+ (BOOL)syncGetSearchGeneralCardAddLimitHeightAbility;

- (id)transformBusinessDataItem:(id)a0 ofDataType:(unsigned long long)a1;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (id)reuseIdentifierWithViewModel:(id)a0;
- (void)attachComponentView:(id)a0 usingViewModel:(id)a1;
- (BOOL)universalReusePoolAllowViewModel:(id)a0;
- (void)registerViewType:(long long)a0 viewClass:(Class)a1;
- (BOOL)doubleColumnExperienceOptimize;
- (BOOL)enableModernFeedSafe;
- (void)uploadErrorInfo:(id)a0;
- (BOOL)p_isSingleCardWidthWith:(id)a0;
- (void)p_trackSizeMeasureWithDuration:(double)a0 viewModel:(id)a1;
- (BOOL)fixCachalotNativeRenderContextErrorSwitch;
- (void)reportErrorInfo:(id)a0 controllerProxyError:(BOOL)a1;
- (void)p_updateComponentView:(id)a0 withViewModel:(id)a1 createCost:(double)a2;
- (BOOL)enablePrerenderComponentExceptionFix;
- (id)fetchCellControllerWithComponet:(id)a0;
- (void)bindComponentContextForData:(id)a0 cellFrame:(id)a1;
- (void)p_trackSearchDataBind:(id)a0 createDuration:(double)a1 bindDuration:(double)a2;
- (BOOL)enableReportErrorInfo;
- (void).cxx_destruct;

@end

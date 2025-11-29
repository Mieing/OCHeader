@class NSString;
@protocol AWESearchAIGCServiceProtocol, AWESearchGeneralPipelinePreRenderProvider, AWESearchHomePageHybridNavitveCardHandlersManagerProtocol;

@interface AWESearchHomePageHybridNativePipeline : AWESearchCachalotCardPipeline

@property (nonatomic) BOOL hasSavedRawData;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWESearchAIGCServiceProtocol> aigcService;
@property (weak, nonatomic) id<AWESearchGeneralPipelinePreRenderProvider> preRenderProvider;
@property (weak, nonatomic) id<AWESearchHomePageHybridNavitveCardHandlersManagerProtocol> cellHandlersManager;

+ (BOOL)syncGetSearchGeneralCardAddLimitHeightAbility;

- (id)transformBusinessDataItem:(id)a0 ofDataType:(unsigned long long)a1;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (id)reuseIdentifierWithViewModel:(id)a0;
- (void)attachComponentView:(id)a0 usingViewModel:(id)a1;
- (BOOL)universalReusePoolAllowViewModel:(id)a0;
- (void)saveBusinessDataOnce:(id)a0;
- (BOOL)isGeneralSearchCard:(id)a0;
- (BOOL)enableReuseIdentiferOpt;
- (void).cxx_destruct;

@end

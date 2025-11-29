@protocol AWESearchAIGCServiceProtocol;

@interface AWESearchResultHybridLynxPipeline : AWESearchCachalotLynxPipeline

@property (weak, nonatomic) id<AWESearchAIGCServiceProtocol> aigcService;
@property (nonatomic) BOOL isInnerFeed;

+ (BOOL)disableCoverLogData;
+ (void)appendCommonParametersForDynamicPatch:(id)a0 containerWidth:(double)a1;

- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (void)attachComponentView:(id)a0 usingViewModel:(id)a1;
- (double)p_defaultNoneZeroHeight;
- (BOOL)supportCustomPreferredLayoutWidth;
- (double)customPreferredLayoutWidth:(double)a0 viewModel:(id)a1;
- (id)p_getPatchWithViewModel:(id)a0 stuffLog:(BOOL)a1;
- (struct CGSize { double x0; double x1; })p_validatedSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (double)p_defaultNoneZeroWidth;
- (id)p_getPatchWithViewModel:(id)a0 stuffLog:(BOOL)a1 containerWidth:(double)a2;
- (void)updateDynamicPathModel:(id)a0 viewModel:(id)a1;
- (void)preprocessDynamicPatch:(id)a0;
- (void).cxx_destruct;

@end

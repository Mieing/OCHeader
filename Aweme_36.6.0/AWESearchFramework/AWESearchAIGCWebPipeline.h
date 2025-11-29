@protocol AWESearchAIGCServiceProtocol;

@interface AWESearchAIGCWebPipeline : AWESearchCachalotWebPipeline

@property (weak, nonatomic) id<AWESearchAIGCServiceProtocol> aigcService;

+ (id)getPatchWithViewModel:(id)a0 stuffLog:(BOOL)a1;
+ (id)getExitDynamicPatchWithViewModel:(id)a0;

- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (void).cxx_destruct;

@end

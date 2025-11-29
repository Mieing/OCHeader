@interface AWESearchHomePageHybridLynxPipeline : AWESearchCachalotLynxPipeline

+ (id)getPatchWithViewModel:(id)a0 stuffLog:(BOOL)a1;
+ (id)getExitDynamicPatchWithViewModel:(id)a0;
+ (BOOL)disableRankProps;
+ (BOOL)disableCoverLogData;

- (id)customGlobalProps;
- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (void)lynxEngine:(id)a0 didFailLoadWithError:(id)a1;
- (void)lynxEngine:(id)a0 didRecieveError:(id)a1;
- (BOOL)fixLynxCardCornerError;
- (id)fetchControllerContextWithLynxEngine:(id)a0;
- (id)fetchViewModelWithLynxEngine:(id)a0;
- (id)generateLynxEngineWithModel:(id)a0 preferWidth:(double)a1 useBullet:(BOOL)a2 shouldReuseLynxView:(BOOL)a3 searchScene:(id)a4 defaultReuseMethod:(long long)a5;
- (void)lynxEngineSearchLynxElementDidMount:(id)a0;
- (void)lynxEngineSearchLynxElementWillEnterFullScreen:(id)a0;
- (void)lynxEngineSearchLynxElementDidBecomeActive:(id)a0;
- (void)lynxEngineSearchLynxElementDidResignActive:(id)a0;
- (BOOL)shouldUseAnnieXWithViewModel:(id)a0 dynamicPatchModel:(id)a1;
- (double)p_defaultNoneZeroHeight;
- (BOOL)enableDrawFromCacheOptimize;
- (BOOL)supportCustomPreferredLayoutWidth;
- (double)customPreferredLayoutWidth:(double)a0 viewModel:(id)a1;
- (BOOL)supportCustomGlobalProps;
- (void)sizeDidChangeWithLynxEngine:(id)a0;
- (BOOL)enableUseUpdateHeightTransaction;

@end

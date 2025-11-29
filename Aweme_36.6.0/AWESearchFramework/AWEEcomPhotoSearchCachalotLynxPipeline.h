@class NSMutableArray, AWESearchDynamicEngine;

@interface AWEEcomPhotoSearchCachalotLynxPipeline : AWESearchCachalotLynxPipeline

@property (retain, nonatomic) NSMutableArray *lynxCardUpdateHeightArray;
@property (retain, nonatomic) AWESearchDynamicEngine *lynxEngineUpdateHeightParams;

- (void)updateComponentView:(id)a0 withViewModel:(id)a1;
- (id)componentViewWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })componentViewSizeWithViewModel:(id)a0 containerWidth:(double)a1;
- (BOOL)supportAsyncComponentViewSizeMeasureWithViewModel:(id)a0;
- (void)lynxEngineDidUpdate:(id)a0;
- (void)lynxEngine:(id)a0 viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)generateLynxEngineWithModel:(id)a0 preferWidth:(double)a1 useBullet:(BOOL)a2 shouldReuseLynxView:(BOOL)a3 searchScene:(id)a4 defaultReuseMethod:(long long)a5;
- (BOOL)shouldUseAnnieXWithViewModel:(id)a0 dynamicPatchModel:(id)a1;
- (void)trackAppendForClientCost:(id)a0 startTime:(double)a1 viewModel:(id)a2;
- (void)p_updateHeightWithLynxEngine:(id)a0;
- (void)p_updateLayoutAndCanBeCanceled:(id)a0;
- (void).cxx_destruct;

@end

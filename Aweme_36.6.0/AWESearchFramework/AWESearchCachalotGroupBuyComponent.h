@class AWESearchCachalotGroupBuyContainerView;
@protocol CachalotRenderPipelineComponentViewModel, CachalotComponent;

@interface AWESearchCachalotGroupBuyComponent : AWESearchCachalotComponent

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) AWESearchCachalotGroupBuyContainerView *containerView;
@property (retain, nonatomic) id<CachalotComponent> bridgeComponent;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)componentPageViewDidAppear:(BOOL)a0;
- (void)componentPageViewWillDisappear:(BOOL)a0;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)componentPrepareForReuse;
- (id)initWithView:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end

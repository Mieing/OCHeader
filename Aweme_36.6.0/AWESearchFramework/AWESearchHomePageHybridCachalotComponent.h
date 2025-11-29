@class AWESearchHomePageHybridCacgalotContainerView;
@protocol CachalotRenderPipelineComponentViewModel, CachalotComponent;

@interface AWESearchHomePageHybridCachalotComponent : AWESearchCachalotComponent

@property (retain, nonatomic) AWESearchHomePageHybridCacgalotContainerView *containerView;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) id<CachalotComponent> bridgeComponent;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;

- (void)componentPageViewDidAppear:(BOOL)a0;
- (void)componentPageViewWillDisappear:(BOOL)a0;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)componentPrepareForReuse;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)initWithView:(id)a0 viewModel:(id)a1;
- (long long)p_getContainerCornerTypeWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)showError;

@end

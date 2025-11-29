@class UIView, NSString, AWESearchAIGCCardContainerView;
@protocol CachalotRenderPipelineComponentViewModel, CachalotComponent;

@interface AWESearchAIGCComponent : AWESearchCachalotComponent <AWESearchAIGCComponentProtocol>

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) id<CachalotComponent> bridgeComponent;
@property (retain, nonatomic) AWESearchAIGCCardContainerView *containerView;
@property (retain, nonatomic) UIView *separateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFixLynxActive;

- (BOOL)sendEvent:(id)a0 params:(id)a1;
- (void)componentPageViewDidAppear:(BOOL)a0;
- (void)componentPageViewWillDisappear:(BOOL)a0;
- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)componentPrepareForReuse;
- (BOOL)lynxUpdateData:(id)a0 processorName:(id)a1;
- (id)initWithView:(id)a0 viewModel:(id)a1;
- (BOOL)updateLynxContainerWidth:(double)a0;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)showError;

@end

@class NSString, SearchCachalotContext;
@protocol CachalotRenderPipelineComponentViewModel, AWESearchCachalotCardViewProtocol;

@interface AWESearchCachalotComponent : NSObject <CachalotComponent> {
    SearchCachalotContext *_context;
}

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) id<AWESearchCachalotCardViewProtocol> view;
@property (readonly, nonatomic) id<AWESearchCachalotCardViewProtocol> wrappedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)componentStickyStatusChange:(BOOL)a0;
- (void)componentPageViewWillAppear:(BOOL)a0;
- (void)componentPageViewDidAppear:(BOOL)a0;
- (void)componentPageViewWillDisappear:(BOOL)a0;
- (void)componentPageViewDidDisappear:(BOOL)a0;
- (id)displayPercentagesForCallback:(BOOL)a0;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)componentActivationDidChange:(BOOL)a0;
- (void)componentDidEndDisplay;
- (void)componentDisplayWithTopPercentage:(double)a0 isReverse:(BOOL)a1;
- (void)componentDisplayWithTopPercentage:(double)a0 isReverse:(BOOL)a1 isHackingDisplay:(BOOL)a2;
- (void)componentShowingRatioWillExceed:(double)a0;
- (void)componentShowingRatioWillUnder:(double)a0;
- (void)componentHighlighted:(BOOL)a0 backgroundView:(id)a1;
- (void)componentPrepareForReuse;
- (BOOL)shouldRespondToHit:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end

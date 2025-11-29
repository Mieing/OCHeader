@interface AWEGrouponLifeFeedsScrollGuidePlugin : AWEGrouponLifeFeedsBasePlugin

@property (nonatomic) double scrollStartTime;
@property (nonatomic) BOOL isTracking;
@property (nonatomic) double lastContentOffsetY;

- (void)startTrack;
- (void)endTrack;
- (void)pageViewDidEndDragging:(id)a0 scrollView:(id)a1 willDecelerate:(BOOL)a2;
- (void)pageViewDidEndDecelerating:(id)a0 scrollView:(id)a1;
- (void)didTapComponentView:(id)a0 viewModel:(id)a1;
- (void)pageDidScroll:(id)a0 scrollView:(id)a1;
- (void)pageViewWillBeginDragging:(id)a0 scrollView:(id)a1;
- (void)didTapReturnFromComponentView:(id)a0 viewModel:(id)a1;
- (void)trackScrollWith:(id)a0;
- (BOOL)shouldTrack;

@end

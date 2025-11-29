@interface AWEMVVideoPlayerController : AWEDCFeedBaseController

- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)cancelRefresh;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)mvPageContext;
- (void)scrollActiveViewToVisibleIfNeeded;
- (void)containerViewDidLoad;

@end

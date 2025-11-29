@class NSString;

@interface AWEDCFeedDetailVCRouter : AWEDCFeedBaseRouter <AWEAwemeDetailTableViewControllerDelegate, AWEAwemeDetailTableViewControllerOuterVCDelegate>

@property (nonatomic) double detailDefaultStartSeekTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detailTableViewControllerDidScroll:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewControllerWillScrollToPreviousItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewControllerWillScrollToNextItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewController:(id)a0 didPauseDisplayingCellWithCurrentPlayingTime:(double)a1;
- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)detailTableViewController:(id)a0 refreshFooterDidShowAtIndex:(long long)a1;
- (void)detailTableViewControllerWillDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerDidDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerDidAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerDidLoadFinish:(id)a0;
- (void)detailTableViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)videoPlayerDidReadyForDisplay:(id)a0;
- (void)videoPlayerWillStartNextLoop:(id)a0;
- (void)detailTableViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackStateWithAction:(long long)a2;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerDidScroll:(id)a0 detailVC:(id)a1 isScrollDown:(BOOL)a2 index:(long long)a3;
- (void)detailTableViewController:(id)a0 scrollViewDidBeginDragging:(id)a1;
- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (id)tidyAwemeConfig;
- (id)tidyAwemeConfig;
- (void)enterVCWithRouterTargetModel:(id)a0;
- (void)handleNewTidyAwemeDetailOptWithConfigModel:(id)a0;
- (void)handleTidyAwemeOptWithConfigModel:(id)a0;
- (void)handleTidyAwemeWithConfigModel:(id)a0;
- (void)handleTruckWithConfigModel:(id)a0;
- (id /* block */)generateRealCompletionBlockWithConfigModel:(id)a0 customProcess:(id)a1;
- (void)handleEnterDetailVCWithTidyModel:(id)a0 innerDataController:(id)a1 detailController:(id)a2 isSameDataController:(BOOL)a3;
- (double)getStartSeekTime:(id)a0;

@end

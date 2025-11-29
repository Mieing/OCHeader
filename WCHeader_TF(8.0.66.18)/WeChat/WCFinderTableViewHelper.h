@interface WCFinderTableViewHelper : NSObject

+ (void)tableViewRegisterCell:(id)a0;
+ (id)feedCellForTableView:(id)a0 rowAtIndexPath:(id)a1 delegate:(id)a2 contentVM:(id)a3 feedViewerScene:(unsigned long long)a4 paramModel:(id)a5;
+ (id)_fullScreenFeedCellForForTableView:(id)a0 rowAtIndexPath:(id)a1 delegate:(id)a2 contentVM:(id)a3 feedViewerScene:(unsigned long long)a4 paramModel:(id)a5;
+ (double)feedHightOfIndexPath:(id)a0 contentVM:(id)a1 width:(double)a2 paramModel:(id)a3;
+ (id)getCurrentFocusIndexPath:(id)a0 tableView:(id)a1;
+ (id)getCurrentFocusIndexPath:(id)a0 tableView:(id)a1 targetContentOffset:(struct CGPoint { double x0; double x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoFrameInLiveCellForCellSize:(struct CGSize { double x0; double x1; })a0 videoSize:(struct CGSize { double x0; double x1; })a1 landScapeMarginTop:(double)a2 landScapeMarginBottom:(double)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })morphDismissTargetFrameInTableView:(id)a0 forLiveId:(id)a1 videoSize:(struct CGSize { double x0; double x1; })a2;
+ (id)morphDismissTargetExtraConfigInTableView:(id)a0 forLiveId:(id)a1;
+ (id)visibleCellInTableView:(id)a0 forLiveId:(id)a1;
+ (id)visibleLivePlayerViewInTableViewCell:(id)a0 forLiveId:(id)a1;
+ (void)scrollToInsertFeedId:(id)a0 aboveFeedId:(id)a1 viewModel:(id)a2 tableView:(id)a3 animated:(BOOL)a4 fromVC:(id)a5 completionBlock:(id /* block */)a6;
+ (void)silenceInsertFeedId:(id)a0 aboveFeedId:(id)a1 viewModel:(id)a2 tableView:(id)a3 fromVC:(id)a4 completionBlock:(id /* block */)a5;

@end

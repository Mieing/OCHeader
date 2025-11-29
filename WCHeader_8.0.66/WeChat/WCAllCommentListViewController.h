@interface WCAllCommentListViewController : WCCommentListViewController

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onMoreClicked:(id)a0;
- (void)showInteractiveMessageManagementView;
- (id)commentListVCTitle;
- (id)rightBarButtonItem;
- (long long)tableViewStyle;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;

@end

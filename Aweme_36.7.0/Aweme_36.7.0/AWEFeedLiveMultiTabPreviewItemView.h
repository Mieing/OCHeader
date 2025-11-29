@class UIViewController, AWEFeedLiveMultiTabPreviewCellModel;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedLiveMultiTabPreviewItemView : UIView

@property (retain, nonatomic) UIViewController<AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol> *feedTableViewController;
@property (retain, nonatomic) AWEFeedLiveMultiTabPreviewCellModel *cellModel;

- (BOOL)needTriggerTabItemLifeCycle;
- (void)configCellWithModel:(id)a0 parentVC:(id)a1;
- (BOOL)existFeedTableViewController;
- (void)feedRefreshWithCompletion:(id /* block */)a0;
- (void)releaseFeedTableViewController;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end

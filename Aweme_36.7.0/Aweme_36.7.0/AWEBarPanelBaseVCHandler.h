@class NSString, AWEBarPanelDetailTableViewController;

@interface AWEBarPanelBaseVCHandler : NSObject <AWEBarPanelDetailTableViewControllerHandlerProtocol>

@property (readonly, weak, nonatomic) AWEBarPanelDetailTableViewController *detailViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowing;
- (id)initWithDetailViewController:(id)a0;
- (void)panelDetailDidFinishLoadMore;
- (id)bottomBarNameInVC:(id)a0;
- (void)willPlayNextVideo:(id)a0;
- (void)didShowPanelViewWithEnterType:(long long)a0;
- (void)didHiddenPanelView;
- (void)panelController:(id)a0 didClickCell:(id)a1 atIndexPath:(id)a2;
- (void)panelController:(id)a0 didLoadPreviousWithList:(id)a1;
- (void)panelController:(id)a0 didLoadMoreWithList:(id)a1;
- (void)panelController:(id)a0 didClickPanelTopContent:(id)a1;
- (void)panelController:(id)a0 didClickClose:(BOOL)a1;
- (void)panelController:(id)a0 panelDragProgress:(double)a1;
- (BOOL)enableAutoPlayNextVideo;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;

@end

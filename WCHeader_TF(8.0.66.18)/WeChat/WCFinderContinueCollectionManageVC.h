@class UIView, UITableViewDiffableDataSource, NSString, UITableView, WCFinderDataLoadTips, WCFinderRefreshTableFooterView, WCFinderContinueCollectionVM, UILabel;

@interface WCFinderContinueCollectionManageVC : MMUIViewController <UITableViewDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderDataLoadTipsDelegate, WCFinderListLoadingStateModelObserver>

@property (retain, nonatomic) WCFinderContinueCollectionVM *viewModel;
@property (retain, nonatomic) UIView *customNavBg;
@property (retain, nonatomic) UIView *descTitleView;
@property (retain, nonatomic) UILabel *descTitleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource;
@property (retain, nonatomic) WCFinderRefreshTableFooterView *footerView;
@property (retain, nonatomic) WCFinderDataLoadTips *dataLoadTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)reportPageInOut;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupBarButtonItems;
- (id)navigationBarBackgroundColor;
- (void)fetchFirstPageData;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)setupLoadingState;
- (void)onListLoadingStateModified;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tableViewRect;
- (void)configureTableView;
- (void)layoutLoadTips;
- (void)setupDataSource;
- (id)cellWithIndexPath:(id)a0;
- (void)updateLoadingState;
- (void)reloadTableData;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)finderFooterDidTriggerRefresh:(id)a0;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)a0;
- (void)onDataLoadTipsClickRetry;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)onClickMore;
- (void)showCollectionContiuneCloseConfirm;
- (void).cxx_destruct;

@end

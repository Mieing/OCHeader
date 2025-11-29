@class WCFinderLongVideoSeeLaterListVM, NSString, WCFinderStreamFooterView, WCFinderDataLoadTips, LVDiffableDataSource, UITableView;

@interface WCFinderLongVideoSeeLaterListVC : MMUIViewController <UITableViewDelegate, LVDiffableDataSourceDelegate, WCFinderDataLoadTipsDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderLongVideoSeeLaterCellDelegate, WCFinderFullShareListViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderListLoadingStateModelObserver>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) LVDiffableDataSource *tableViewSource;
@property (retain, nonatomic) WCFinderDataLoadTips *dataLoadTips;
@property (retain, nonatomic) WCFinderStreamFooterView *footer;
@property (retain, nonatomic) WCFinderLongVideoSeeLaterListVM *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidPushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)setupUI;
- (void)setupDataSource;
- (void)setupLoadingState;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)a0;
- (void)diffableDataSource:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)onSeeLaterCellClickDeleteWithContentVM:(id)a0;
- (int)seeLaterCellGetCommentScene;
- (void)onListLoadingStateModified;
- (void)layoutLoadTips;
- (int)commentScene;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (void)onFullScreenDidEndPlayContentVM:(id)a0 finderPlayerReport:(id)a1;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end

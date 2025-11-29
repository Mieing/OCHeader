@class AWEIMTaskDetailListDataSource, AWEIMTaskPlatformTracker, AWEIMTaskDetailistContext, AWEIMTaskPlatformContext, NSString, AWEUILoadingView, UITableView, NSMutableArray, AWEIMTaskNetErrorView, AWEIMTaskCardListCellItem, UILabel, AWEIMTaskPlatformFilterViewController;
@protocol AWEIMTaskPlatformDetailViewControllerDelegate;

@interface AWEIMTaskPlatformDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEIMTaskDetailistSectionHeaderFooterViewDelegate, AWEIMTaskDetailListNewSelectionHeaderViewDelegate, AWEIMTaskPlatformDetailCardDetailCellFooterViewDelegate, AWEIMTaskPlatformFilterViewControllerDelegate, AWEIMRendererProtocol>

@property (retain, nonatomic) UITableView *tableview;
@property (retain, nonatomic) AWEIMTaskNetErrorView *netErrorView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (retain, nonatomic) AWEIMTaskDetailListDataSource *datasource;
@property (retain, nonatomic) AWEIMTaskDetailistContext *context;
@property (weak, nonatomic) AWEIMTaskPlatformContext *platformContext;
@property (retain, nonatomic) AWEIMTaskCardListCellItem *pageItem;
@property (retain, nonatomic) AWEIMTaskPlatformFilterViewController *filterViewController;
@property (retain, nonatomic) AWEIMTaskPlatformTracker *taskPlatformTracker;
@property (retain, nonatomic) NSMutableArray *cellTrackedArray;
@property (nonatomic) long long loadMoreFooterIndex;
@property (nonatomic) BOOL hasLoadMoreFooterShowTracked;
@property (retain, nonatomic) AWEUILoadingView *businessLoadingView;
@property (weak, nonatomic) id<AWEIMTaskPlatformDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL needTrackEnterListPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__trackEnterEvent;
- (void)onRetryRequestData;
- (void)onSectionHeaderClickForModel:(id)a0;
- (void)onSectionFooterClick;
- (void)onSelectionCellClick:(id)a0;
- (void)onNormalCellClick:(id)a0 cellContext:(id)a1;
- (void)onButtonClickForModel:(id)a0 button:(id)a1;
- (void)onButtonClickForModel:(id)a0;
- (long long)__cellCount;
- (void)filterViewControllerDismiss;
- (BOOL)shouldShowTipsInSection:(long long)a0;
- (id)createTaskSectionFooterViewWithFooterModel:(id)a0;
- (void)filterCollectionViewSelectCellConfirm;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)viewDidDisappear;

@end

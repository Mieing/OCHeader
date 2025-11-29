@class IESLiveWebpLoadingView, IESLiveViewingHistoryApi, IESLiveEmptyView, NSArray, NSString, UIButton, UITableView, IESLiveFeedLoadMoreFooter, IESLiveFeedDrawerViewControllerContext;

@interface IESLiveViewingHistoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *feedDrawerContext;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) UIButton *backButton;
@property (weak, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (retain, nonatomic) IESLiveFeedLoadMoreFooter *tableViewFooter;
@property (weak, nonatomic) IESLiveEmptyView *loginView;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) IESLiveViewingHistoryApi *historyApi;
@property (copy, nonatomic) NSArray *historyList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshLayout:(BOOL)a0;
- (void)configureUI;
- (void)backButtonAction:(id)a0;
- (void)showEmptyView;
- (void)fetchViewingHistory;
- (void)loginButtonAction;
- (void)changeTableViewFotterStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end

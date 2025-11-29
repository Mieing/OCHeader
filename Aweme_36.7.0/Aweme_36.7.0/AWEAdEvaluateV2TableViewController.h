@class UIViewController, AWEAdFeedCommentEmptyPageView, AWEAdEvaluateDataController, NSString, AWEUILoadingView, UITableView;
@protocol AWEAdEvaluateCommentContext, AWECommentTemplateCellViewModelManager;

@interface AWEAdEvaluateV2TableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEAdFeedCommentEmptyPageViewProtocol>

@property (retain, nonatomic) id<AWEAdEvaluateCommentContext> context;
@property (retain, nonatomic) AWEAdEvaluateDataController *dataController;
@property (retain, nonatomic) AWEAdFeedCommentEmptyPageView *emptyContentView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) id<AWECommentTemplateCellViewModelManager> viewModelManager;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) UIViewController *container;
@property (copy, nonatomic) id /* block */ fetchDataSucceed;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL fromCommentVC;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL isShowInContainerView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL shouldForceLightMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCommentContext:(id)a0;
- (void)galleryWithParams:(id)a0;
- (void)initialFetch;
- (void)showNetworkError;
- (void)showEmptyPage;
- (void)showNormalPage;
- (void)_endRefreshing;
- (void)showNetworkErrorWhileLoading;
- (void)updateEmptyViewWithNetworkError;
- (void)updateEmptyViewWithNetworkErrorWhileLoading;
- (void)updateEmptyViewWithNoResult;
- (id)extraParamsWithAwemeModel:(id)a0 WithAppraiseID:(id)a1;
- (void)fetchCommentDataWithCompletion:(id /* block */)a0;
- (void)retryLoadData;
- (BOOL)isCurrentLight;
- (void)diggAction:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end

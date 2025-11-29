@class AWELiveAcqCastVideoSearchUserManager, NSDictionary, NSString, AWEUILoadingView, UITableView;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoSearchUserController : AWELiveAcqCastVideoSearchBaseController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) BOOL isFetching;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWELiveAcqCastVideoSearchUserManager *userManager;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (id)initWithDataManager:(id)a0 viewModel:(id)a1 trackParams:(id)a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end

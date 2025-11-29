@class AWEBDPRankListViewModel, AWEBDPRankListView, NSString, UIView, BDPUniqueID;
@protocol BDPOpenCardProfileDelegate;

@interface AWEBDPRankListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEBDPRankListViewDelegate, AWEBDPRankListCellDelegate>

@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *placeholderView;
@property (retain, nonatomic) AWEBDPRankListView *rankListView;
@property (retain, nonatomic) AWEBDPRankListViewModel *viewModel;
@property (retain, nonatomic) id<BDPOpenCardProfileDelegate> openCardProfilePlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupRetryView;
- (void)openProfile:(id)a0 secUid:(id)a1;
- (void)retryNetConnect;
- (void)onTapCloseButton;
- (void)onShowOffButtonTap;
- (void)onInviteButton;
- (void)setupRankListView;
- (void)setupRankView;
- (void)showRemindViewIfNeed;
- (void)inviteFriendWithParam:(id)a0;
- (id)reqModelWithRelationType:(id)a0 pageNum:(id)a1;
- (void)initRankListView;
- (id)initWithUniqueID:(id)a0 model:(id)a1 dismissAction:(id /* block */)a2;
- (void)showFromParentViewController:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dismissView;

@end

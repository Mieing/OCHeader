@class NSObject, NSString, NSDictionary, NSMutableArray, UITableView;
@protocol AFDSearchUserManagerProtocol;

@interface AWEInviteSearchViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL isPullToRefresh;
@property (retain, nonatomic) NSDictionary *searchLogPb;
@property (retain, nonatomic) NSMutableArray *trackUserList;
@property (nonatomic) BOOL hasPhoneNumResult;
@property (retain, nonatomic) NSObject<AFDSearchUserManagerProtocol> *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)p_searchUserListTrack;
- (void)p_loadMoreData;
- (void)p_fetchData;
- (void)searchUserWithKeyWord:(id)a0;
- (void)unfollowUser:(id)a0 indexPath:(id)a1;
- (void)followUser:(id)a0 indexPath:(id)a1;
- (id)aweui_emptyPageConfig;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end

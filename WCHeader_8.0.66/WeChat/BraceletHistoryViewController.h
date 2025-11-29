@class NSString, NSMutableArray, MMTableView;

@interface BraceletHistoryViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BraceletSportRecordDelegate>

@property (nonatomic) BOOL isSelf;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableArray *dailySportList;
@property (nonatomic) unsigned long long initTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserName:(id)a0;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)initData;
- (void)initView;
- (void)onGetUserHistoryPage:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onClickAppWithWAContact:(id)a0;
- (void)onClickLikeButtonWithLikeList:(id)a0;
- (void)onClickAppWithFinderUsername:(id)a0 records:(id)a1;
- (void).cxx_destruct;

@end

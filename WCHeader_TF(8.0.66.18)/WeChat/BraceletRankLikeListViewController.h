@class NSString, NSArray, MMTableView;

@interface BraceletRankLikeListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource> {
    MMTableView *_tableView;
    NSArray *_aryLikeUserList;
    BOOL _bFromMsg;
    BOOL _bHasLikeUser;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRankLikeList:(id)a0 FromMsg:(BOOL)a1;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)makeCell:(id)a0 AtIndexPath:(id)a1;
- (void)onLatestRank;
- (void).cxx_destruct;

@end

@class MMTableView, NSString, NSMutableArray, MMUILabel;

@interface BrandSingleAuthHistoryViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) unsigned int state;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUILabel *emptyContentLabel;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSMutableArray *recordsList;
@property (nonatomic) int initialUpdatedTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserName:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initEmptyLabel;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)loadMoreData;
- (void)initRefreshControl;
- (void).cxx_destruct;

@end

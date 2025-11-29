@class MMTableView, NSString, UIView, NSMutableArray, MMUILabel;

@interface BrandAuthListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) unsigned int state;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) MMUILabel *headerLabel;
@property (retain, nonatomic) UIView *topSeperatorLineView;
@property (nonatomic) unsigned long long requestCount;
@property (retain, nonatomic) MMUILabel *emptyContentLabel;
@property (retain, nonatomic) NSMutableArray *scopeItemList;
@property (nonatomic) int initialUpdatedTimeStamp;
@property (nonatomic) unsigned long long brandContactType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)initHeaderView;
- (void)initTableView;
- (void)initEmptyLabel;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)initRefreshControl;
- (void)loadMoreData;
- (void).cxx_destruct;

@end

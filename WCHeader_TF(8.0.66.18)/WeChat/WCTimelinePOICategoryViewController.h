@class NSString, NSMutableArray, MMTableView;
@protocol POICategoryDelegate;

@interface WCTimelinePOICategoryViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMPackageDownloadMgrExt>

@property (retain, nonatomic) MMTableView *m_tableView;
@property (retain, nonatomic) NSMutableArray *m_categoryArray;
@property (weak, nonatomic) id<POICategoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initTableHeaderView;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onPackageListUpdated:(id)a0;
- (void)handleCategoriesConfig:(id)a0;
- (void).cxx_destruct;

@end

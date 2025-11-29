@class NSString, UIView, AWEPublishVideoSyncDataModel, UITableView;

@interface AWEPublishVideoSyncContentViewController : AWEPublishHalfScreenContentViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *headerBar;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEPublishVideoSyncDataModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerTableViewCellReuse;
- (double)contentHeight;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)accessibilityPerformEscape;
- (void)setupViews;

@end

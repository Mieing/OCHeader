@class NSString, NSMutableArray, UITableView;

@interface WXGRoamDeviceAddViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IRoamBackupPackageServiceExt, IRoamOutBoxServiceExt>

@property (retain, nonatomic) UITableView *mainTable;
@property (retain, nonatomic) NSMutableArray *cellHeightArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)setupTitleView;
- (void)setupTable;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)makeCellForRow:(long long)a0;
- (void).cxx_destruct;

@end

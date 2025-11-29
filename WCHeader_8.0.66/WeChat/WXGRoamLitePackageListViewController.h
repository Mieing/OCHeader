@class NSString, UITableView;

@interface WXGRoamLitePackageListViewController : MMUIViewController <UITableViewDataSource, WXGRoamLitePackageCellDelegate, IRoamBackupPackageServiceExt>

@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)cell:(id)a0 didTapBackupWithViewModel:(id)a1;
- (void)cell:(id)a0 didTapDeleteWithViewModel:(id)a1;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)a0;
- (void).cxx_destruct;

@end

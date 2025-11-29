@class NSArray, NSString, UITableView;

@interface SettingMigrationViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *mainTableView;
@property (retain, nonatomic) NSArray *sectionArr;
@property (copy, nonatomic) NSString *titleString;
@property (nonatomic) BOOL isMigrationOptEnable;
@property (nonatomic) BOOL isCloudBackupEnable;
@property (nonatomic) unsigned long long enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)checkSupportMigratePC;

- (id)init;
- (id)navigationBarBackgroundColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTableViewFrame;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)getHeaderView;
- (void)migrateFromCloud;
- (void)migrateFromMobile;
- (void)migrateFromOthers;
- (void)migrateToPC;
- (void)migrateToMobile;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end

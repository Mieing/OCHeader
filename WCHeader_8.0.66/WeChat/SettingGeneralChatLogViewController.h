@class NSArray, NSString, UIView, NSMutableArray, UITableView;

@interface SettingGeneralChatLogViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *iconArray;
@property (retain, nonatomic) NSArray *titleArray;
@property (retain, nonatomic) NSArray *tipsArray;
@property (retain, nonatomic) NSArray *actionArray;
@property (retain, nonatomic) NSMutableArray *cellHeightArr;
@property (retain, nonatomic) UITableView *mainTableView;
@property (retain, nonatomic) UIView *bottomClearFooterView;
@property (nonatomic) BOOL isPomEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTableViewFrame;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupBottomClearFooterView;
- (void)adjustBottomClearFooterLayout;
- (void)onTapClearAll;
- (void)showBackupTip;
- (void)enterMigration;
- (void)showClearLocalDataView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end

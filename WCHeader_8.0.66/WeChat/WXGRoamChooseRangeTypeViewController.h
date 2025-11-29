@class MMUINavigationBar, NSArray, NSMutableArray, NSMutableSet, NSString, UINavigationItem, UITableView;
@protocol WXGRoamChooseRangeTypeViewControllerDelegate;

@interface WXGRoamChooseRangeTypeViewController : MMWindowViewController <UITableViewDelegate, UITableViewDataSource, WCMomentsContactTagListViewControllerDelegate, IRoamBackupPackageServiceExt>

@property (retain, nonatomic) UITableView *sheetView;
@property (retain, nonatomic) UINavigationItem *customNavigationItem;
@property (retain, nonatomic) MMUINavigationBar *customNavigationBar;
@property (retain, nonatomic) NSMutableSet *selectedSet;
@property (retain, nonatomic) NSArray *selectedTags;
@property (retain, nonatomic) NSMutableArray *selectedUserIncludes;
@property (nonatomic) long long enterScene;
@property (weak, nonatomic) id<WXGRoamChooseRangeTypeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)setupNavBar;
- (void)updateView;
- (void)onSelectContactTag;
- (void)onSelectIncludeUsers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onCancel;
- (void)onCreate;
- (void)onRoamBackupPackageServiceChooseRangeIncludeUserComplete:(BOOL)a0;
- (void)contactTagListViewController:(id)a0 didSelectContactTag:(id)a1;
- (void).cxx_destruct;

@end

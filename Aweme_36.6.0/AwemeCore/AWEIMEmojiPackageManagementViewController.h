@class UITableView, NSArray, NSDictionary, NSString, UIView, UIButton;

@interface AWEIMEmojiPackageManagementViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEIMEmojiPackageManagementTableViewCellDelegate>

@property (retain, nonatomic) UIButton *editButton;
@property (retain, nonatomic) UIView *bgContainerView;
@property (retain, nonatomic) UITableView *managementTable;
@property (copy, nonatomic) NSArray *emojiPackages;
@property (nonatomic) BOOL hasReodered;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)__setupNavigationBar;
- (void)__setUPUIs;
- (void)__populateData;
- (void)__didClickBack;
- (void)__resetEmptyBackgroundTipView;
- (void)emojiPackageManagementCellDidClickDelete:(id)a0;
- (void)__refreshEditingAppearance;
- (void)__endEditingWhenAllPackagesDeleted;
- (void)__showDeleteActionSheetWithDeleteHandler:(id /* block */)a0;
- (void)__cancelEditingAndReloadIfNeeded;
- (void)__addManagementTable;
- (void)__didClickToEdit;
- (void)__resetEditButtonTitle;
- (void)__resetBackButtonEditingAppearance;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;

@end

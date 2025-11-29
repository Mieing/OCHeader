@class AWEIMShareListSelectUserController, AWEIMShareCurrentGroupListViewController, NSString, UILabel;

@interface AWEIMNewShareListViewController : AWEIMListBaseViewController <AWERouterViewControllerProtocol, AWEIMShareCurrentGroupListViewControllerDelegate, AWEIMShareListSelectUserControllerDelegate>

@property (retain, nonatomic) UILabel *completionLabel;
@property (retain, nonatomic) AWEIMShareListSelectUserController *selectUserController;
@property (nonatomic) BOOL isForwardIMMessage;
@property (retain, nonatomic) AWEIMShareCurrentGroupListViewController *currentGroupVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)setShareContext:(id)a0;
- (void)changeToMultiselect:(BOOL)a0;
- (void)p_dismiss;
- (void)p_updateNavBar;
- (void)didFocusOnTextfield:(id)a0;
- (void)updateMultiselectCount:(long long)a0;
- (void)p_cancelMultiSelect;
- (void)p_didTapComplete;
- (void)p_switchToMultiSelect;
- (void)shareCurrentGroupListViewController:(id)a0 didFinishedSelectedGroup:(id)a1;
- (BOOL)shareCurrentGroupListViewController:(id)a0 couldSelectGroup:(id)a1 withSelectedGroup:(id)a2;
- (void)shareListSelectUserController:(id)a0 didSentMessage:(id)a1;
- (void)shareListSelectUserController:(id)a0 didShowAlertVC:(id)a1;
- (void)tappedFeature:(id)a0;
- (BOOL)canTapCellAtIndexPath:(id)a0;
- (long long)currentFunctin;
- (id)functionArray;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end

@class WAAppAuthorizationAccountLogic, NSString, WAAppAuthInfoData, WAContact;

@interface WAAppAuthorizationAccountViewController : ZZFLEXTableViewController <MMAuthorizeAddAvatarViewControllerDelegate, WCActionSheetDelegate>

@property (retain, nonatomic) WAAppAuthorizationAccountLogic *logic;
@property (retain, nonatomic) WAContact *contact;
@property (retain, nonatomic) WAAppAuthInfoData *authInfo;
@property (copy, nonatomic) id /* block */ updateAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 authInfo:(id)a1;
- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void)reloadAccountVCUI;
- (void)onReturn;
- (void)switchAuthState:(unsigned int)a0 completeAction:(id /* block */)a1;
- (void)switchAuthState:(unsigned int)a0 accountId:(unsigned int)a1 completeAction:(id /* block */)a2;
- (void)addNewAccount;
- (void)editAccount:(id)a0;
- (void)deleteAcctount:(id)a0 adIndex:(long long)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)onAddAvatarSuccess:(id)a0;
- (void)onModAvatarSuccess:(id)a0;
- (void).cxx_destruct;

@end

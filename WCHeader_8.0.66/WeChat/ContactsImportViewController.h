@class CContactVerifyLogic, SendVerifyMsgLogicController, MMUIViewController, NSString, NSMutableDictionary, OldAccountContact, ContactsImportLogic, NSMutableArray, CContact, MMTableView, NSIndexPath;

@interface ContactsImportViewController : MMUIViewController <SendVerifyMsgViewControllerDelegate, contactVerifyLogicDelegate, ContactsImportLogicDelegate, ContactInfoViewControllerDelegate, ContactsImportTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) ContactsImportLogic *contactsImportLogic;
@property (retain, nonatomic) NSMutableArray *pinyinKeys;
@property (retain, nonatomic) NSMutableDictionary *pinyinToContactsMap;
@property (retain, nonatomic) CContactVerifyLogic *contactVerifyLogic;
@property (retain, nonatomic) SendVerifyMsgLogicController *sendVerifyMessageLogicController;
@property (retain, nonatomic) OldAccountContact *operatingOldAccountContact;
@property (retain, nonatomic) NSIndexPath *operatingIndexPath;
@property (retain, nonatomic) CContact *operatingContact;
@property (retain, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) MMUIViewController *guideViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContactsImportLogic:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)initTableView;
- (void)initData;
- (void)startLoading;
- (void)stopLoading;
- (void)onTapCancelBarButtonItem;
- (void)appendContactList:(id)a0;
- (id)getContactFromOldAccountContact:(id)a0;
- (void)updateOperaingOldAccountContactStatus:(unsigned int)a0 verifyMessage:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onTapAddButton:(id)a0;
- (void)onContactVerifyFillVerifyMsg:(id)a0;
- (void)onFetchContactListSucceeded:(id)a0 appendContactList:(id)a1 isFinished:(BOOL)a2;
- (void)onFetchContactListFailed:(id)a0;
- (void)onSendVerifyMessage:(id)a0;
- (void)onRemoveContact;
- (void)contactAddContactOk:(id)a0;
- (void)contactSendRequestOk:(id)a0;
- (void).cxx_destruct;

@end

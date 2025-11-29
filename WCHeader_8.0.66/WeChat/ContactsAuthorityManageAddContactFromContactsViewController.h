@class NSString, ContactTagData, ContactsAuthorityManageModifyContactLogic;
@protocol ContactsAuthorityManageAddContactFromContactsViewControllerDelegate;

@interface ContactsAuthorityManageAddContactFromContactsViewController : MultiSelectContactsViewController <ContactsAuthorityManageModifyContactLogicDelegate> {
    ContactsAuthorityManageModifyContactLogic *m_newContactFunctionTagAddContactLogic;
}

@property (retain, nonatomic) ContactTagData *m_contactTagData;
@property (weak, nonatomic) id<ContactsAuthorityManageAddContactFromContactsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initData;
- (BOOL)isContactExisted:(id)a0;
- (void)onCancel:(id)a0;
- (void)onDone:(id)a0;
- (id)getViewController;
- (void)onNewContactAuthorityAddContactSuccess:(id)a0;
- (void)reloadAuthorityDetailAddContactWithDicMultiSelect:(id)a0 andDicExistContact:(id)a1;
- (void).cxx_destruct;

@end

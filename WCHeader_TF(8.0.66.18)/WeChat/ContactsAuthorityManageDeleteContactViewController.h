@class NSString, ContactsAuthorityManageModifyContactLogic, ContactTagData, NSMutableDictionary, NSMutableSet;
@protocol ContactsAuthorityManageDeleteContactViewControllerDelegate;

@interface ContactsAuthorityManageDeleteContactViewController : MultiSelectContactsViewController <ContactsAuthorityManageModifyContactLogicDelegate, WCFacadeExt> {
    NSMutableDictionary *m_loadContactDataIDic;
    NSMutableSet *m_socialBlackSuccessModifyUsrNameSet;
}

@property (retain, nonatomic) ContactsAuthorityManageModifyContactLogic *m_contactsAuthorityManageModifyContactLogic;
@property (retain, nonatomic) ContactTagData *m_contactTagData;
@property (weak, nonatomic) id<ContactsAuthorityManageDeleteContactViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)initData;
- (void)updatePanelBtn;
- (id)getContactsAuthorityManageModifyContactLogic;
- (void)onCancel:(id)a0;
- (void)onDone:(id)a0;
- (void)modifyTagDetailDeleteContact;
- (void)modifyAuthorityTagDetailDeleteContactConfirm:(id)a0;
- (void)modifyAuthorityDetailDeleteContact;
- (BOOL)onShouldSelectContact:(id)a0;
- (BOOL)onFilterContactCandidate:(id)a0;
- (id)getReloadContactDataList;
- (void)reloadContactDataDic;
- (id)getViewController;
- (void)onNewContactAuthorityDeleteContactSuccess:(id)a0;
- (void)reloadAuthorityDetailDeleteContactWithDicMultiSelect:(id)a0 andDicExistContact:(id)a1;
- (void).cxx_destruct;

@end

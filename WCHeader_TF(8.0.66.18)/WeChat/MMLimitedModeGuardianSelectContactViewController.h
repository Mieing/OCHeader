@class UINavigationController, NSString, ForwardMessageLogicController, CContact, ContactsDataLogic, CMessageWrap, MMLimitedModeGuardianLogic;

@interface MMLimitedModeGuardianSelectContactViewController : ContactBaseSelectListViewController <ContactSelectListViewControllerDelegate, MMLimitedModeGuardianLogicDelegate, ForwardMessageLogicDelegate> {
    MMLimitedModeGuardianLogic *m_guardianLogic;
    ForwardMessageLogicController *m_forwardMsgLogic;
    CContact *m_selectedContact;
    CMessageWrap *m_oMessageWrap;
}

@property (retain, nonatomic) ContactsDataLogic *m_contactsDataLogic;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) UINavigationController *m_preNavController;
@property (nonatomic) unsigned long long bindScene;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)getContactsDataLogic;
- (void)didClickLeftCloseBarButton;
- (void)forMessage:(id)a0 ticket:(id)a1;
- (unsigned int)getContactInfoViewFromScene;
- (id)getReloadContactDataList;
- (void)onSelectedContact:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)pushToResultViewController;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)onGetTeenagerModePreBindGuardianInfo:(id)a0 success:(BOOL)a1 errMsg:(id)a2;
- (void).cxx_destruct;

@end

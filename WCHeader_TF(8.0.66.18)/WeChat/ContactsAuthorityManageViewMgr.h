@class NSString, NSMutableArray, ContactsDataLogic;

@interface ContactsAuthorityManageViewMgr : MMUserService <IContactMgrExt, ContactsDataLogicDelegate, MMServiceProtocol> {
    NSMutableArray *m_arSocialBlackFunctionTagContact;
    NSMutableArray *m_arSnsBlackFunctionTagContact;
    NSMutableArray *m_arSnsNointerestingFunctionTagContact;
    NSMutableArray *m_arFinderBlackFunctionTagContact;
    NSMutableArray *m_arFinderOutsideFunctionTagContact;
    NSMutableArray *m_arWowHideFunctionTagContact;
    NSMutableArray *m_arWowBlockFunctionTagContact;
    NSMutableArray *m_arWeRunBlackFunctionTagContact;
}

@property (retain, nonatomic) ContactsDataLogic *m_contactsDataLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getNewContactFunctionTagWithTagId:(unsigned int)a0;
- (id)getSocialBlackFunctionTagContactList;
- (void)reloadSocialBlackFunctionTagContactList;
- (id)getSnsBlackFunctionTagContactList;
- (void)reloadSnsBlackFunctionTagContactList;
- (id)getSnsNointerestingFunctionTagContactList;
- (void)reloadSnsNointerestingFunctionTagContactList;
- (BOOL)checkSnsNointerestingWithContact:(id)a0;
- (id)getFinderBlackFunctionTagContactList;
- (void)reloadFinderBlackFunctionTagContactList;
- (id)getFinderOutsideFunctionTagContactList;
- (void)reloadFinderOutsideFunctionTagContactList;
- (id)getWeRunBlackFunctionTagContactList;
- (void)reloadWeRunBlackFunctionTagContactList;
- (void)preloadWowData;
- (id)getWowHideFunctionTagContactList;
- (void)reloadWowHideFunctionTagContactList;
- (BOOL)checkWowHideWithContact:(id)a0;
- (id)getWowBlockFunctionTagContactList;
- (void)reloadWowBlockFunctionTagContactList;
- (BOOL)checkWowBlockWithContact:(id)a0;
- (void)reloadNewContactFunctionTagContactList:(unsigned int)a0;
- (void)onServiceInit;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)reportContactsAuthorityManageOperateLogWithActionCode:(unsigned int)a0 bizType:(unsigned int)a1 authType:(unsigned int)a2 selectionType:(unsigned int)a3 selectionCount:(unsigned int)a4 selectionFriCount:(unsigned int)a5 originListFriCount:(unsigned int)a6 submitFriCount:(unsigned int)a7;
- (unsigned int)getContactsAuthorityManageBizTypeWithAuthorityID:(unsigned int)a0;
- (unsigned int)getContactsAuthorityManageAuthTypeWithAuthorityID:(unsigned int)a0;
- (BOOL)checkIsValidContact:(id)a0;
- (void).cxx_destruct;

@end

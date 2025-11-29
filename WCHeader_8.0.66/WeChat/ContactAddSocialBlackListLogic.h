@class NSString, ContactsDataLogic;

@interface ContactAddSocialBlackListLogic : MMObject <ContactsDataLogicDelegate> {
    ContactsDataLogic *m_contactsDataLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reportBatchSocialBlackWithActionCode:(unsigned int)a0 andSelectFriendNum:(unsigned long long)a1 andModifiedSucFriendNum:(unsigned long long)a2 andModifiedSucFriendsStr:(id)a3 andBeforSocialBlackFriendNum:(unsigned long long)a4 andAfterSocialblackFriendNum:(unsigned long long)a5 andActionOperateNum:(unsigned long long)a6 andSelectTagName:(id)a7 andSelectTagID:(id)a8 andStayTime:(double)a9 andSessionID:(id)a10;

- (id)init;
- (void)initData;
- (id)getAddContactLoadContactListWithScene:(unsigned int)a0;
- (id)getContactsDataLogic;
- (id)getAddContactLoadContactListFromChatRoom:(id)a0;
- (id)getAddContactLoadContactListFromContactTagData:(id)a0;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)a0;
- (void).cxx_destruct;

@end

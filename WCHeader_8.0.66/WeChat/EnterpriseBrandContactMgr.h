@class NSString;

@interface EnterpriseBrandContactMgr : MMUserService <IContactMgrExt, PBMessageObserverDelegate, MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getEnabledSubBrandContactList:(id)a0;
- (id)getDisabledSubBrandContactList:(id)a0;
- (id)getEnterpriseChatContact:(id)a0;
- (id)getEnterpriseChatExtendContacts:(id)a0;
- (BOOL)hasChatExtendSubBrand:(id)a0;
- (id)getSubBrandContacts:(id)a0 ForConnectMsgType:(unsigned long long)a1;
- (BOOL)hasMainBrandForConnectMsgType:(unsigned long long)a0;
- (id)getMainAndChatBrandListForConnectMsgType:(unsigned long long)a0;
- (id)sortMainAndChatBrandContacts:(id)a0;
- (void)updateEnterpriseBrandContactOfMainBrand:(id)a0;
- (void)forceUpdateEnterpriseBrandContact:(id)a0;
- (void)switchBrandContact:(id)a0 enable:(BOOL)a1;
- (void)handleSwitchBrandContact:(id)a0;
- (void)callEnterpriseBrandContactModifiedExtension:(id)a0;
- (void)callEnterpriseBrandAttrChangedExtension:(id)a0;
- (void)callEnterpriseBrandContactDeletedExtension:(id)a0;
- (void)callEnterpriseBrandSyncedExtension:(id)a0 extParams:(id)a1;
- (void)onModifyContact:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)onRemoveContactFromAddressBook:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end

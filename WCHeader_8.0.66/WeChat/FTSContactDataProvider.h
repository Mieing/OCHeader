@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableSet, ContactsDataLogic, NSMutableArray;

@interface FTSContactDataProvider : MMUserService <IContactMgrExt, IContactLabelMgrExt, IMMNewSessionMgrExt, WXGImportMessageNotification, IMMRegionCodeMgrExt, MMServiceProtocol> {
    NSMutableDictionary *_dicContact;
    NSMutableArray *_arrSessionContact;
    NSMutableDictionary *_dicNewestCreateTimeForSession;
    NSMutableDictionary *_dicTagNames;
    NSMutableDictionary *_dicZoneNames;
    NSMutableDictionary *_dicZoneCode;
    NSMutableArray *_arrSingleContact;
    NSMutableArray *_arrSingleFriendContact;
    NSMutableArray *_arrGroupContact;
    NSMutableArray *_arrOpenImContact;
    NSMutableArray *_arrBrandContact;
    NSMutableArray *_arrBrandServiceContact;
    BOOL _hasLoadedSessionContact;
    BOOL _hasLoadedChatRoomData;
    NSMutableSet *_ftsContactVerifySet;
    unsigned int _lastVerifyTime;
    NSMutableSet *_setChatRoomWithoutMemList;
    NSRecursiveLock *m_loadAllContactsUseLock;
    ContactsDataLogic *m_contactsDataLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isFtsValidContact:(id)a0;
+ (BOOL)isFtsValidContact:(id)a0 needGroupMember:(BOOL)a1 checkListType:(BOOL)a2;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void)clearData;
- (void)clearSessionCreateTime;
- (void)doInit;
- (void)notifyReload;
- (void)loadAllSessionContact;
- (id)loadSessionUserName:(id)a0;
- (void)tryLoadContacts;
- (void)tryLoadContacts:(id)a0;
- (void)reloadZone:(id)a0;
- (void)updateZone:(id)a0;
- (void)addContact:(id)a0;
- (void)deleteContact:(id)a0;
- (void)tryInitSessionContactTime;
- (void)asyncParseChatRoomData:(id)a0;
- (void)updateChatRoomData:(id)a0;
- (id)getAllContacts:(BOOL)a0;
- (id)getMMSingleContactsWithOpenIM;
- (id)getMMSingleContactsWithGroup;
- (id)getMMSingleContact;
- (id)getMMSingleFriendContact;
- (id)getBrandContact;
- (id)getBrandServiceContact;
- (id)getGroupContact;
- (id)getOpenImContact;
- (id)getDicContacts;
- (id)getDicSessionCreateTime;
- (id)getDicTagNames;
- (id)getDicZoneNames;
- (BOOL)hasAllContactLoaded;
- (BOOL)hasLoadedSessionContact;
- (BOOL)hasLoadedChatRoomData;
- (BOOL)hasInitSessionContact;
- (void)onModifyContact:(id)a0;
- (void)OnChangeNotifyStatus:(id)a0 withStatus:(BOOL)a1;
- (void)onDeleteContact:(id)a0;
- (void)onContactListUpdate:(unsigned int)a0;
- (void)onDeleteSessionOfUser:(id)a0;
- (void)onNewMsgArriving:(id)a0 NotifyFlag:(long long)a1;
- (void)onAllTagNameUpdate;
- (void)onContactTagNameUpdate:(id)a0;
- (void)onRegionCodeReload;
- (void)tryDoVerifyReport;
- (void)verifyChatRoomStatus:(id)a0;
- (void)internalVerifySourceConsistency;
- (void)internalReportChatRoomStatus;
- (void)internalReportSourceVerifyStatusWithSession:(id)a0 andListContact:(id)a1;
- (void)makeupFtsContactSource:(id)a0;
- (void).cxx_destruct;

@end

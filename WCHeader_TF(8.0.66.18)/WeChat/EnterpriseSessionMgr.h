@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface EnterpriseSessionMgr : MMUserService <ISessionInfoExt, MMServiceProtocol, ISessionStorageDelegate, IEnterpriseMsgExt, IEnterpriseContactMgrExt, IEnterpriseGroupMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrFilterExt, IContactMgrExt> {
    NSMutableDictionary *m_brandStorages;
    NSMutableDictionary *m_mainSessionInfoItems;
    NSMutableDictionary *m_mainSessionUpdateTime;
    NSString *m_nsActiveSessionId;
    NSObject<OS_dispatch_queue> *m_msgDispatchQueue;
    BOOL _fastOnAddMsg;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)compareEnterpriseSession:(id)a0 right:(id)a1;

- (id)init;
- (void)onServiceInit;
- (id)filePathForMainSessionInfoCache;
- (id)storageForBrand:(id)a0;
- (id)InfoItemForBrand:(id)a0;
- (id)InfoItemForBrand:(id)a0 needFillMainSession:(BOOL)a1;
- (void)saveMainSessionInfoItems;
- (void)loadMainSessionInfoItems;
- (void)setActiveSession:(id)a0;
- (BOOL)isActiveSession:(id)a0;
- (id)getActiveSession;
- (void)checkChatBrand:(id)a0;
- (unsigned int)sessionCountForBrand:(id)a0;
- (id)sessionInfoAtIndex:(long long)a0 forBrand:(id)a1;
- (id)sessionInfo:(id)a0 forBrand:(id)a1;
- (id)allSessionInfoForBrand:(id)a0;
- (id)allSessionIdForBrand:(id)a0;
- (unsigned int)totalUnreadCntForBrand:(id)a0;
- (unsigned int)totalUnreadCntForBrand:(id)a0 exceptSubBrand:(id)a1;
- (void)createSessionForEnterpriseContact:(id)a0;
- (void)deleteAllSessionForBrand:(id)a0;
- (void)deleteSession:(id)a0 forBrand:(id)a1;
- (void)saveSessionInfo:(id)a0 forBrand:(id)a1;
- (void)updateSessionInfo:(id)a0 forBrand:(id)a1;
- (void)updateSession:(id)a0 forBrand:(id)a1;
- (void)clearAtMeCountOfSession:(id)a0 forBrand:(id)a1;
- (void)changeUnReadCountOfSession:(id)a0 forBrand:(id)a1 to:(unsigned int)a2;
- (void)notifyEnterpriseBrandChatSessionChanged:(id)a0;
- (id)mainSessionForBrand:(id)a0;
- (id)updateUnReadOfMainSession:(id)a0 brand:(id)a1;
- (id)updateMainSessionUnReadForBrand:(id)a0;
- (void)updateMainSessionInfoForBrand:(id)a0 lastMsg:(id)a1 checkLastMsg:(BOOL)a2;
- (void)internalUpdateMainSessionInfoForBrand:(id)a0 lastMsg:(id)a1 checkLastMsg:(BOOL)a2;
- (void)onEnterSessionListForBrand:(id)a0;
- (id)LastMsgForBrand:(id)a0;
- (void)cleanUpEnterpriseChat:(id)a0;
- (void)cleanUpEnterpriseChatSession:(id)a0;
- (id)importSessions;
- (long long)compareSession:(id)a0 rightSession:(id)a1;
- (void)OnBatchAddEnterpriseMsg:(id)a0 Brand:(id)a1;
- (void)SlowOnBatchAddEnterpriseMsg:(id)a0 Brand:(id)a1;
- (void)FastOnBatchAddEnterpriseMsg:(id)a0 Brand:(id)a1;
- (void)OnAddEnterpriseMsg:(id)a0 Brand:(id)a1 WrapMsg:(id)a2;
- (void)internalOnDelMsg:(id)a0 Brand:(id)a1;
- (void)OnDelMsg:(id)a0 Brand:(id)a1 MsgWrap:(id)a2;
- (void)OnDelMsg:(id)a0 Brand:(id)a1 DelAll:(BOOL)a2;
- (void)OnSyncReadMsg:(id)a0 Brand:(id)a1;
- (void)OnModEnterpriseMsg:(id)a0 Brand:(id)a1 WrapMsg:(id)a2;
- (void)OnUnReadEnterpriseMsgCountChange:(id)a0 Brand:(id)a1;
- (void)onCreateEnterpriseGroup:(id)a0 errorCode:(int)a1 extDic:(id)a2;
- (void)onInitiateBizChat:(id)a0 errorCode:(int)a1 extDic:(id)a2;
- (void)onGetDraft:(id)a0 contact:(id)a1;
- (void)onModifyEnterpriseContact:(id)a0;
- (void)onBatchModifyEnterpriseContact:(id)a0;
- (void)onModifyEnterpriseContactDraft:(id)a0;
- (void)onDeleteContact:(id)a0;
- (void)onRemoveContactFromAddressBook:(id)a0;
- (void)onModifyContact:(id)a0;
- (void)internalOnDeleteContact:(id)a0;
- (void)onDeleteSessionOfUser:(id)a0;
- (BOOL)isUserShouldHandled:(id)a0;
- (BOOL)isMessageShouldHandled:(id)a0;
- (id)isUserHasSpecalSessionInfo:(id)a0;
- (void).cxx_destruct;

@end

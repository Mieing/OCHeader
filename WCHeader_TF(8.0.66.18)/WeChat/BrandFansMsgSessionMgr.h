@class NSMutableDictionary, BrandBizInfo, WCTDatabase, BrandFansMsgSessionStorage, BrandMsgNotification, NSString;

@interface BrandFansMsgSessionMgr : MMUserService <PBMessageObserverDelegate, BizTlPersonalCenterMgrExt, IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *sessionStorages;
@property (retain, nonatomic) WCTDatabase *sessionDB;
@property (retain, nonatomic) BrandBizInfo *currentBizInfo;
@property (retain, nonatomic) BrandFansMsgSessionStorage *currentSessionStorage;
@property (retain, nonatomic) BrandMsgNotification *currentBrandNotification;
@property (nonatomic) BOOL currentMsgNotifyEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bizForMessage:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (id)sessionStorageForBizuin:(id)a0;
- (id)chatLogicControllerForSessionInfo:(id)a0;
- (unsigned long long)getUnreadCountForBizuin:(id)a0;
- (void)addOrUpdateSessionForSessionID:(id)a0 message:(id)a1 bizuin:(id)a2;
- (void)clearAllUnreadCountForBizuin:(id)a0;
- (void)clearUnreadCountForSessionInfo:(id)a0;
- (void)clearUnreadCountForSessionInfo:(id)a0 fromPush:(BOOL)a1;
- (void)sendClearUnreadCountCGIForSessionInfo:(id)a0;
- (void)handleClearUnreadCountResponse:(id)a0 request:(id)a1;
- (void)deleteSessionInfo:(id)a0;
- (void)updateReplyTipsForSessionInfo:(id)a0;
- (void)handleUpdateReplyTipsResponse:(id)a0 request:(id)a1;
- (void)onBrandMsgNotificationUpdatedWithDigest:(id)a0 timestamp:(int)a1;
- (void)updateMsgNotifyEnable:(BOOL)a0;
- (id)currentBizUin;
- (void)onBizPersonalCenterLoginBizUin:(id)a0;
- (void)onBizPersonalCenterLogoutBizUin:(id)a0;
- (BOOL)isValidUsrName:(id)a0;
- (void)OnDelMsg:(id)a0;
- (void)OnAddMsgListForSession:(id)a0 NotifyUsrName:(id)a1;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void)addSendFailedSystemMsgIfNeedForSession:(id)a0 msgWrap:(id)a1;
- (void)handleSpamXmlMsg:(id)a0 msgWrap:(id)a1;
- (void)addSpamSystemMsgForSession:(id)a0 msgWrap:(id)a1 wording:(id)a2;
- (id)sessionControllerForCurrentBizuin;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end

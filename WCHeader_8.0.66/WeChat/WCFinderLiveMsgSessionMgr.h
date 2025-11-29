@class WCFinderLiveMsgSessionInfoStorage, NSString;

@interface WCFinderLiveMsgSessionMgr : MMUserService <IMsgExt, WCFinderSwitchExt, WCFinderFinderInitExt, MMServiceProtocol>

@property (retain, nonatomic) WCFinderLiveMsgSessionInfoStorage *qaSessionInfoStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultFinderContactForUsername:(id)a0;

- (id)init;
- (void)onServiceMemoryWarning;
- (void)genLiveMsgSessionIdWithTaskId:(id)a0 sourceType:(unsigned int)a1 toUserName:(id)a2 completionBlock:(id /* block */)a3;
- (id)getLiveMsgSessionInfoListByAnchorOrAssistantWithTaskId:(id)a0;
- (void)getLiveMsgSessionInfoByAudienceWithTaskId:(id)a0 sourceType:(unsigned int)a1 completionBlock:(id /* block */)a2;
- (id)getLocalMsgSessionInfoWithSessionId:(id)a0;
- (id)getLocalLiveMsgSessionInfosWithTaskId:(id)a0;
- (unsigned int)getUnreadCountForSessionId:(id)a0;
- (void)clearUnreadCountForSessionId:(id)a0;
- (void)deleteSessionWithSessionId:(id)a0;
- (BOOL)isUserNeedProcess:(id)a0;
- (id)addOrUpdateSessionWithSessionId:(id)a0 wrapMsg:(id)a1;
- (id)addLocalMsgWithSessionId:(id)a0 liveAppMsg:(id)a1 msgStatus:(unsigned int)a2 localClientMsgId:(id)a3;
- (void)finderLiveIdentityChange;
- (void)OnUnReadCountChange:(id)a0;
- (void)OnDelMsg:(id)a0;
- (void)OnAddMsgListForSession:(id)a0 NotifyUsrName:(id)a1;
- (void)_batchAddMsgListForSession:(id)a0;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void)onFinderInitSuccessful;
- (void)onFinderCancellationAccount;
- (void)onFinderCreateAccount;
- (void)onFinderUserprepare;
- (unsigned long long)getTotalUnreadCount;
- (void).cxx_destruct;

@end

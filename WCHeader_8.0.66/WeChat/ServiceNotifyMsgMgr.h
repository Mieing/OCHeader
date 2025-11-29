@class NSString, NSMutableDictionary, NotifyMsgDB;

@interface ServiceNotifyMsgMgr : MMUserService <IMsgExt, IFunctionMsgExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dicClientReqInfo;
@property (retain, nonatomic) NotifyMsgDB *notifyDB;
@property (nonatomic) BOOL isServerNotifyBoxExposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onMainFrameExposeMsg:(id)a0 rowIndex:(unsigned long long)a1 unreadCount:(unsigned int)a2;
- (void)onMainFrameMsgClick:(id)a0 rowIndex:(unsigned long long)a1 unreadCount:(unsigned int)a2;
- (void)onMainFrameMsgClickForNewRowIndex:(id)a0 rowIndex:(unsigned long long)a1 unreadCount:(unsigned int)a2;
- (void)onSessionExposeViewModels:(id)a0;
- (void)onSessionEndExposeMsgs;
- (void)makeExposedWithMsgs:(id)a0;
- (void)requestNewMsgWithCustomBuff:(id)a0;
- (void)modifyFollowNotifyWithMsgWrap:(id)a0 blockNotify:(BOOL)a1 complete:(id /* block */)a2;
- (void)modAcceptTeamupMsg:(id)a0 liveId:(unsigned long long)a1 objectId:(unsigned long long)a2 blockNotify:(BOOL)a3 finderUsername:(id)a4 successBlock:(id /* block */)a5;
- (void)modAcceptFansGroupLiveMsg:(id)a0 liveId:(unsigned long long)a1 objectId:(unsigned long long)a2 blockNotify:(BOOL)a3 finderUsername:(id)a4 successBlock:(id /* block */)a5;
- (void)modCustomNotifyMsg:(id)a0 liveId:(unsigned long long)a1 objectId:(unsigned long long)a2 accept:(BOOL)a3 finderUsername:(id)a4 noticeType:(unsigned int)a5 completion:(id /* block */)a6;
- (BOOL)canShowNotifyMsg:(id)a0;
- (void)updateXmlInfoWithMsg:(id)a0 notify:(BOOL)a1;
- (BOOL)isInTemplateMsgSeesion;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onFunctionMgrShowMsgs:(id)a0 bussinessId:(unsigned long long)a1 businessInfo:(id)a2;
- (void)replaceUnReadLiveEndWithMsgID:(id)a0 arrNewTipsID:(id)a1;
- (id)getReportInfoWithExtInfos:(id)a0 msgSvrID:(long long)a1;
- (void)onFunctionMsgRequest:(id)a0 bussinessId:(unsigned long long)a1 functionMsgId:(id)a2;
- (void)onFunctionMgrWillShowMsg:(id)a0 bussinessId:(unsigned long long)a1 canShow:(id)a2;
- (void)onFunctionMgrFetchMsgFailWithBussinessId:(unsigned long long)a0 functionMsgId:(id)a1;
- (void)reportServerNotifyBoxOprationWithOpType:(unsigned int)a0 message:(id)a1 rowIndex:(unsigned long long)a2 firstExpose:(BOOL)a3 unreadCount:(unsigned int)a4;
- (void).cxx_destruct;

@end

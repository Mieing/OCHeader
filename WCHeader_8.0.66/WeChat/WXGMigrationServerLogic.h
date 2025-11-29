@class ChatMigrationHeartBeatMonitor, NSString, WXGLocalAreaCommunicationServer, NSMutableDictionary, WXGBackupDataMgr, WXGBackupDataInfo, NSObject, NSMutableArray, WXGChatLogProtoHandler, MMTimer;
@protocol OS_dispatch_queue, WXGMigrationServerLogicDelegate;

@interface WXGMigrationServerLogic : NSObject <LocalAreaCommunicationServerDelegate, ChatMigrationHeartBeatMonitorDelegate> {
    NSObject<OS_dispatch_queue> *m_processLogicQueue;
    NSObject<OS_dispatch_queue> *m_getDataLogicQueue;
    BOOL m_bServerStop;
    BOOL m_bStartTransfer;
    int m_chatMigrationType;
    int m_otherSideChatMigrationVersion;
    long long m_otherSideSupportExt;
    ChatMigrationHeartBeatMonitor *m_heartBeatMonitor;
    MMTimer *m_sendHeartBeatTimer;
    double m_heartTimerCheckInterval;
    double m_transferDataStartTime;
    NSMutableArray *m_sendingArray;
    NSMutableDictionary *m_sessionNickDictionary;
    WXGBackupDataInfo *m_backupDataInfo;
    NSString *m_lastBackupSesionName;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    BOOL m_bFirstTag;
    WXGLocalAreaCommunicationServer *m_networkHandler;
    WXGChatLogProtoHandler *m_protoHandler;
    WXGBackupDataMgr *m_dataMgr;
    BOOL m_sendFinish;
}

@property (weak, nonatomic) id<WXGMigrationServerLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startNetworkServer;
- (void)startPeerServer;
- (void)stopServerLogic;
- (void)confirmNoSelectTimeMigrationOrQuickMigration;
- (void)p_dataProcess:(id)a0 andLength:(unsigned int)a1;
- (void)p_processAuthenticateRequestData:(id)a0;
- (void)p_processStartRequestData:(id)a0;
- (void)p_processRequestSessionResponseData:(id)a0;
- (void)p_processDataPushResponseData:(id)a0;
- (void)p_processBackupDataTagResponseData:(id)a0;
- (void)p_processHeartBeatRequestData:(id)a0;
- (void)p_processHeartBeatResponseData:(id)a0;
- (void)p_processCancelRequestData:(id)a0;
- (BOOL)isSupportBackupNewFeature;
- (BOOL)isSupportWXAM;
- (BOOL)isSupportTimeSelect;
- (BOOL)isSupportQuickMigration;
- (void)p_inputDataAndStartDataMgrProduce;
- (id)p_resortSessionArray:(id)a0;
- (BOOL)sendData:(id)a0;
- (void)p_sendRequestSession;
- (void)p_sendLotOfDataPush;
- (void)p_sendNextDataPushWithResponseID:(id)a0;
- (void)p_sendBackupOutputToRemote:(id)a0;
- (void)p_processDataInfoAndSendTag:(id)a0;
- (void)p_sendFinishRequest;
- (void)onServerReciveData:(id)a0 andLength:(unsigned int)a1;
- (void)onServerConnected;
- (void)onServerDisconnect;
- (void)onServerTransferSendSpeed:(float)a0 sendLength:(unsigned long long)a1 receiveSpeed:(float)a2 receiveLength:(unsigned long long)a3;
- (void)restSendHeartBeatTimer;
- (void)p_sendHeartBeat;
- (void)p_sendHeartBeatResponseWithAck:(unsigned long long)a0;
- (void)p_sendHeartBeatRequestWithAck:(unsigned long long)a0;
- (void)onHeartBeatPacketSendWithAckID:(unsigned long long)a0;
- (void)onHeartBeatOK;
- (void)onHeartBeatLate;
- (void)onHeartBeatAckIDWrong;
- (void)p_notifyOnMainthread:(unsigned long long)a0;
- (void)p_alertOnMainthread:(unsigned long long)a0;
- (void)p_notifyOnMainThreadCurrentSession:(unsigned long long)a0 totalSession:(unsigned long long)a1;
- (void).cxx_destruct;

@end

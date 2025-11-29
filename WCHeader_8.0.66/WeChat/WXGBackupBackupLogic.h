@class NSString, WXGBackupDataInfo, WXGBackupDataMgr, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WXGBackupBackupLogic : WXGBackupBasicLogic <WXGBackupDataMgrDelegate, WXGBackupBasicLogicProtocol> {
    WXGBackupDataMgr *m_dataMgr;
    WXGBackupDataInfo *m_backupDataInfo;
    BOOL m_bFirstTag;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_lastBackupSesionName;
    NSMutableDictionary *m_sessionNickDictionary;
    NSMutableArray *m_sendingArray;
    BOOL m_bStopService;
    NSObject<OS_dispatch_queue> *m_backupLogicQueue;
    BOOL m_bSendFinish;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startService;
- (void)stopService;
- (void)confirmLogic;
- (BOOL)sendData:(id)a0;
- (void)sendStartRequest;
- (void)sendRequestSession;
- (void)sendFinishRequest;
- (void)sendBackupDataTagWithDataInfo:(id)a0;
- (void)sendBackupConfirm;
- (void)sendNextDataPushWithResponseID:(id)a0;
- (void)sendLotOfDataPush;
- (void)p_sendBackupOutputToRemote:(id)a0;
- (void)p_processBackupDataTag:(id)a0;
- (void)onDataMgrRequiredFilterRequest:(id)a0;
- (void)onDataMgrFilterOneMedia:(unsigned long long)a0;
- (void)processStartResponseData:(id)a0;
- (void)processRequestSessionResponseData:(id)a0;
- (void)processDataPushResponseData:(id)a0;
- (void)processBackupDataTagResponseData:(id)a0;
- (void)processFilterResponseData:(id)a0;
- (void)reportDisconnect:(unsigned long long)a0;
- (void).cxx_destruct;

@end

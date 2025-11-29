@class WXGBackupRecoverHelper, NSString;

@interface WXGBackupRecoverLogic : WXGBackupBasicLogic <WXGBackupRecoverHelperDelegate, WXGBackupBasicLogicProtocol> {
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    NSString *m_lastSessionName;
    BOOL m_bFirstTag;
    BOOL m_bStopService;
    BOOL m_bProcessFinish;
}

@property (retain, nonatomic) WXGBackupRecoverHelper *recoverHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startService;
- (void)stopService;
- (void)confirmLogic;
- (BOOL)sendData:(id)a0;
- (void)sendStartResponseWithStatus:(int)a0;
- (void)sendRecoverConfirm;
- (void)sendDataPushResponse:(id)a0;
- (void)sendDataTagResponseForDataTag:(id)a0;
- (void)sendRequestSessionResponseWithDataInfoArray:(id)a0;
- (void)sendFilterResponse:(id)a0;
- (void)processStartRequestData:(id)a0;
- (void)processRequestSessionData:(id)a0;
- (void)processDataPushData:(id)a0;
- (void)processBackupDataTagData:(id)a0;
- (void)processFilterRequestData:(id)a0;
- (void)processFinishRequestData:(id)a0;
- (void)onData:(id)a0 writeToFileFinish:(BOOL)a1;
- (void)onDataTagProcessEnd:(id)a0;
- (void)onRequestSessionProcessEndWithResponse:(id)a0;
- (void)onFilterRequestEnd:(id)a0 filterSize:(unsigned long long)a1;
- (void)reportDisconnect:(unsigned long long)a0;
- (void)onLastImportFinished;
- (BOOL)onPhoneDiskNotEnouge;
- (void).cxx_destruct;

@end

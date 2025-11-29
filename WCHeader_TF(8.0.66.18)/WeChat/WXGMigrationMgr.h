@class NSString, WXGMigrationInfoDB, ChatMigrationGetConnectInfo, NSObject;
@protocol OS_dispatch_queue;

@interface WXGMigrationMgr : MMUserService <MMKernelExt, IMsgExt, ChatMigrationGetConnectInfoDelegate, MMServiceProtocol> {
    WXGMigrationInfoDB *m_infoDB;
    NSObject<OS_dispatch_queue> *m_updateTimeQueue;
    BOOL m_bShouldNotInterruption;
    NSString *m_deviceID;
    BOOL m_bCheckState;
    unsigned int m_deviceType;
    BOOL m_bBackground;
}

@property (retain, nonatomic) ChatMigrationGetConnectInfo *getConnectionInfo;
@property (retain, nonatomic) NSString *connectionInfoUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)checkState;
- (void)p_onMainThreadShowClientEntryViewControllerWithNotifyCode:(unsigned long long)a0;
- (void)p_onMainThreadShowServerEntryViewControllerWithNotifyCode:(unsigned long long)a0;
- (BOOL)isMigrationWorking;
- (void)shouldNotInterruption;
- (void)canInterrutpion;
- (void)showLocalNotificationWhenChatMigrationWorking;
- (void)showUseHotspotContinueToMigrate;
- (void)setPairDeviceType:(unsigned int)a0;
- (unsigned int)getPairDeviceType;
- (void)setUserDeviceIDAndCreateTable:(id)a0;
- (id)getSessionInfoResultResultArrayWithDataInfo:(id)a0 withTmpLastTime:(unsigned int)a1;
- (void)resetSession:(id)a0 withBeginTime:(unsigned int)a1 withEndTime:(unsigned int)a2;
- (BOOL)hasBeenMigration;
- (BOOL)hasBeenMigrationWithSessionNameArray:(id)a0;
- (void)onAuthOK;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (id)getConnectURL:(id)a0;
- (void)onGetConnectInfoNotSameAccount;
- (void)onGetConnectInfo:(id)a0;
- (void).cxx_destruct;

@end

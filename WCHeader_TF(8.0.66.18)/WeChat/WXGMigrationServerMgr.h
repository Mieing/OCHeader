@class ChatMigrationCreateQRCode, NSString, NSArray, NSData, WXGMigrationServerEntryViewController, WXGMigrationMainViewController, WXGMigrationServerLogic;

@interface WXGMigrationServerMgr : MMUserService <ChatMigrationCreateQRCodeDelegate, WXGMigrationServerLogicDelegate, WXGMigrationServerEntryViewControllerDelegate, WCAccountAutoLoginControlLogicExt, WXGMigrationMainViewControllerDelegate, MMServiceProtocol> {
    WXGMigrationServerEntryViewController *m_serverEntryViewController;
    WXGMigrationMainViewController *mgViewController;
    id m_kickOutLogicObj;
    SEL m_kickOutSel;
    BOOL m_isWorking;
    WXGMigrationServerLogic *m_serverLogic;
    ChatMigrationCreateQRCode *m_qrCodeHandler;
}

@property (nonatomic) unsigned long long entryOpenType;
@property (retain, nonatomic) NSString *server_id;
@property (retain, nonatomic) NSData *server_key;
@property (retain, nonatomic) NSString *server_hello;
@property (retain, nonatomic) NSString *server_ok;
@property (retain, nonatomic) NSString *server_ip;
@property (retain, nonatomic) NSString *server_ticket;
@property (nonatomic) unsigned int cryptUin;
@property (nonatomic) unsigned short server_port;
@property (retain, nonatomic) NSArray *sessionArray;
@property (nonatomic) unsigned long long totalMsgCount;
@property (nonatomic) unsigned long long totalSessionSize;
@property (retain, nonatomic) NSString *pcName;
@property (retain, nonatomic) NSString *pcAccouttName;
@property (retain, nonatomic) NSString *wifiName;
@property (retain, nonatomic) NSString *selfWifiName;
@property (nonatomic) unsigned long long inMemoryMigrationSize;
@property (nonatomic) unsigned long long migrationSize;
@property (nonatomic) float migrationSizeProgress;
@property (nonatomic) unsigned long long notifyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)resetServerState;
- (id)getAllSessionArray;
- (void)registerKickOutEvent:(id)a0 AndSelector:(SEL)a1;
- (void)doLogoutAction;
- (BOOL)isLogout;
- (void)notifyWaitToSelect;
- (void)notifyWaitToMigration;
- (void)notifyWaitLoadingData;
- (void)notifyGetQRCodeFailed;
- (void)showMigrationViewController;
- (void)outerShowMigrationViewController;
- (void)innerShowMigrationViewController;
- (void)onMinimizeServerEntryViewController;
- (void)onCancelServerEntryViewController;
- (void)onFinishServerEntryViewController;
- (void)onServerLogicNotifyCode:(unsigned long long)a0;
- (void)onServerLogicAlertCode:(unsigned long long)a0;
- (void)onServerLogicCurrentProcessingSession:(unsigned long long)a0 totalSessionCount:(unsigned long long)a1;
- (void)onServerLogicTransferSpeed:(float)a0 leftTime:(unsigned int)a1 sizeProgress:(float)a2;
- (void)startServerService;
- (void)stopServerService;
- (void)pauseLogic;
- (BOOL)isServerWorking;
- (void)clearServerAllTmpData;
- (void)confirmNoSelectTimeMigrationOrQuickMigration;
- (void)resetGetQRCodeImage;
- (void)getQRCodeImage;
- (void)p_getQRCodeImageOnline;
- (void)p_getQRCodeImageOffline;
- (void)onGetQRCode:(id)a0;
- (void)onGetQRCodeOffline:(id)a0;
- (void)autoLoginLogic:(id)a0 needInterruptKickOut:(id /* block */)a1 withReplayKickOutSelector:(SEL)a2;
- (void)onMinimizeEntryViewController;
- (void)onCancelEntryViewController;
- (void).cxx_destruct;

@end

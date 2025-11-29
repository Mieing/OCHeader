@class WXGPureOfflineMigrationServerLogic, NSString, WXGPureOfflineMigrationServerViewController, NSData, NSDictionary;

@interface WXGPureOfflineMigrationServerMgr : MMUserService <WXGPureOfflineMigrationServerViewControllerDelegate, WXGPureOfflineMigrationServerLogicDelegate, MMServiceProtocol>

@property (retain, nonatomic) WXGPureOfflineMigrationServerViewController *pomsVc;
@property (retain, nonatomic) WXGPureOfflineMigrationServerLogic *serverLogic;
@property (nonatomic) BOOL isServerRunning;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) NSString *hashUserNameFromPeer;
@property (retain, nonatomic) NSString *pcName;
@property (retain, nonatomic) NSString *wifiName;
@property (nonatomic) unsigned long long notifyCode;
@property (nonatomic) BOOL isUserLogin;
@property (retain, nonatomic) NSString *serverIp;
@property (nonatomic) unsigned short serverPort;
@property (retain, nonatomic) NSString *authId;
@property (retain, nonatomic) NSString *authHello;
@property (retain, nonatomic) NSString *authOk;
@property (retain, nonatomic) NSData *authKey;
@property (readonly, nonatomic) NSDictionary *sessionDict;
@property (readonly, nonatomic) unsigned long long totalMsgCount;
@property (readonly, nonatomic) unsigned long long totalSessionSize;
@property (nonatomic) BOOL isAllTime;
@property (nonatomic) BOOL isTextOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isKeepScreenOn;
+ (void)ensureValidContext;

- (void)onServiceInit;
- (void)dealloc;
- (void)resetData;
- (void)updateSessionArray:(id)a0;
- (void)onNotifyCodeChange:(unsigned long long)a0;
- (void)showPureOfflineMigration:(id)a0;
- (void)getQrcodeImage;
- (void)onGetQrcode:(id)a0;
- (void)onCheckQrcodeBind:(int)a0 hashUserName:(id)a1;
- (void)onCloseCurrentViewController;
- (void)onNotifyCodeTo:(unsigned long long)a0;
- (void)startServerService;
- (void)stopServerService;
- (void)pauseLogic;
- (void)clearServerAllTmpData;
- (BOOL)isServerWorking;
- (void)startTransfer;
- (void)chooseMigrationRange:(BOOL)a0;
- (void)onChooseUser:(id)a0;
- (void)onChooseUserOnMainThread:(id)a0;
- (void)onServerLogicNotifyCode:(unsigned long long)a0;
- (void)onServerLogicTransferSpeed:(float)a0 leftTime:(unsigned int)a1 sizeProgress:(float)a2;
- (void).cxx_destruct;

@end

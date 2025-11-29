@class NSString;

@interface WXGMigrationAccountMgr : MMUserService <MMKernelExt, IExptServiceExt, MMServiceProtocol>

@property (nonatomic) BOOL isNewReg;
@property (nonatomic) BOOL shouldShowBanner;
@property (nonatomic) BOOL isPureOfflineMigEnable;
@property (nonatomic) BOOL hasShowBannerCurrentProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (id)keyWithUsername:(id)a0;
- (id)getMmkv;
- (void)initAccountInfo;
- (BOOL)isAccountHasChatLog:(id)a0;
- (id)getAccountInfoBySha256:(id)a0;
- (id)getAccountInfoBySha256:(id)a0 mmkv:(id)a1;
- (BOOL)shouldShowPomEntryOnLoginPage;
- (void)onHideBanner;
- (void)hideBannerForever;
- (BOOL)isMainDbCreatedRecently:(id)a0 timeSpan:(int)a1;
- (id)createOrUpdateAccountInfo:(id)a0;
- (void)checkShowBanner:(id)a0;
- (void)onExptItemListChange;
- (void)onManulLoginOK;
- (void)onNewRegOK;
- (void)onAuthOK;

@end

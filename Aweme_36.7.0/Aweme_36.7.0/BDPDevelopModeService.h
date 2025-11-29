@class NSString;

@interface BDPDevelopModeService : NSObject <BDPDevelopModeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (BOOL)shouldShowMorePanelDebugItemWithAppId:(id)a0;
- (id)easterEggDictWithAppId:(id)a0;
- (void)easterEggRefreshBoundAppListWithAppId:(id)a0;
- (void)changeDevInfoWithUid:(id)a0 easterEggDict:(id)a1;
- (id)initService;
- (id)getUidInfoItemWithUid:(id)a0;
- (BOOL)canShowDevModeEntranceWithUid:(id)a0;
- (BOOL)devModeSwitchOnWithUid:(id)a0;
- (BOOL)checkTimorListWithAppId:(id)a0;
- (id)devModeTimorItemWithUid:(id)a0 appId:(id)a1;
- (BOOL)isControlBoxOn:(id)a0 appId:(id)a1;
- (id)easterEggDictWithUid:(id)a0;
- (void)changeDevInfoWithUid:(id)a0 appList:(id)a1;
- (void)changeDevInfoWithUid:(id)a0 devModeSwitchOn:(BOOL)a1;
- (void)changeDevInfoWithAppId:(id)a0 easterEggDict:(id)a1;
- (void)bindDeviceWithUid:(id)a0 appId:(id)a1 appName:(id)a2 version:(id)a3 appType:(long long)a4;
- (void)unbindDeviceWithUid:(id)a0 appId:(id)a1;
- (void)changeDevInfoWithUid:(id)a0 appId:(id)a1 controlBoxOn:(BOOL)a2;
- (void)changeDevInfoWithUid:(id)a0 canShowDevMode:(BOOL)a1;
- (void)trackDevelopModeSwitchWithIsOn:(BOOL)a0 userOpen:(BOOL)a1 appCount:(long long)a2;
- (void)trackDevelopTestJoinResultWithResultType:(id)a0 failType:(id)a1 successType:(id)a2 appId:(id)a3 appName:(id)a4 appType:(long long)a5;

@end

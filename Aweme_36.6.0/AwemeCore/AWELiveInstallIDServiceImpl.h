@class NSString;

@interface AWELiveInstallIDServiceImpl : NSObject <IESLiveAppInfo>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveInstallIDServiceImplDOUYINAdapterClass;

- (id)fpid;
- (id)updateVersionCode;
- (BOOL)isInHouse;
- (id)appVersionCode;
- (id)commonParametersWithoutL0;
- (id)commonParametersWithUrlString:(id)a0;
- (id)liveID;
- (BOOL)appIsLaunchFromNewInstall;
- (BOOL)appIsLaunchFromVersionUpgrade;
- (id)appUpgradeFromVersion;
- (id)appGroupId;
- (long long)currentAPPUIMode;
- (BOOL)isBOEEnabled;
- (id)TTAccountToken;
- (id)TTAccountSDKVersion;
- (id)webSocketAppKey;
- (void)checkInstalledLiveWidget:(id /* block */)a0;
- (BOOL)enableGlobalIdleTimerControl;
- (void)setNeverLockWithIdentifier:(id)a0;
- (void)setAutoLockWithIdentifier:(id)a0;
- (id)aAWELiveInstallIDServiceImplDOUYINAdapter;
- (BOOL)isOriginBOEEnabled;
- (id)appID;
- (id)appName;
- (id)channel;
- (id)deviceType;
- (id)deviceID;
- (id)sessionKey;
- (id)installID;
- (id)accessCode;
- (unsigned long long)currentTarget;
- (id)appBuildNumber;

@end

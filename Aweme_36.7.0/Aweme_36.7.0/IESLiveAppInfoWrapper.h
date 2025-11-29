@class NSString;
@protocol IESLiveAppInfo;

@interface IESLiveAppInfoWrapper : NSObject <IESLiveAppInfo>

@property (retain, nonatomic) id<IESLiveAppInfo> appInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (BOOL)isPPEEnabled;
- (BOOL)isHybridPPEEnabled;
- (id)lane;
- (BOOL)needDisableDarkMode;
- (id)TTAccountToken;
- (id)TTAccountSDKVersion;
- (id)webSocketAppKey;
- (id)liveWsIdentify;
- (long long)liveWsServiceID;
- (long long)liveWsMethodID;
- (void)checkInstalledLiveWidget:(id /* block */)a0;
- (BOOL)enableGlobalIdleTimerControl;
- (void)setNeverLockWithIdentifier:(id)a0;
- (void)setAutoLockWithIdentifier:(id)a0;
- (id)appID;
- (id)appName;
- (void).cxx_destruct;
- (id)channel;
- (id)deviceID;
- (id)sessionKey;
- (id)installID;
- (id)initWithAppInfo:(id)a0;
- (id)accessCode;
- (unsigned long long)currentTarget;
- (id)appBuildNumber;

@end

@class NSString;

@interface AWELongConnectionManager : NSObject <IESIMUserServiceMessage, IESIMInstallAndDeviceIDMessage, IESIMNetworkDomainMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (id)settingsConfig;
- (void)didUpdateInstallIDFrom:(id)a0 to:(id)a1;
- (void)didUpdateDeviceIDFrom:(id)a0 to:(id)a1;
- (void)didUpdateNetworkDomainConfig:(id)a0;
- (void)configWithLaunchTime:(id)a0;
- (void)accountPrivacyPolicyAgreeNoti:(id)a0;
- (void)p_connectIfNeeded;
- (BOOL)connectAfterPrivacy;
- (BOOL)connectRateEnable;
- (void)p_connect;
- (id)pushConfig:(id)a0;
- (BOOL)reconnectForLogInOut;
- (void)p_reconnectIgnoreBeforeStatus;
- (BOOL)shouldTrackUpdateUrls;
- (void)config;
- (BOOL)isConnected;
- (id)init;
- (void)dealloc;
- (id)connectionManager;
- (void)p_addObservers;

@end

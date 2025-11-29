@class NSArray;

@interface BDXBridgeAuthSetting : NSObject <NSCopying>

@property (nonatomic) long long updateAuthConfigTimeInterval;
@property (nonatomic) BOOL enableUpdateAuthConfig;
@property (nonatomic) long long settingsVersion;
@property (nonatomic) BOOL isCloseAuth;
@property (nonatomic) BOOL openConfigUpdate;
@property (nonatomic) BOOL isCloseAllH5Auth;
@property (nonatomic) BOOL isCloseAllLynxAuth;
@property (nonatomic) BOOL isCloseAllLynxExceptionAuth;
@property (nonatomic) BOOL isCloseAllH5ExceptionAuth;
@property (copy, nonatomic) NSArray *closeAuthUrls;
@property (nonatomic) BOOL isCloseAppIDJSBAuth;
@property (nonatomic) BOOL authTTAllPassed;
@property (nonatomic) BOOL forceUseIESAuth;
@property (nonatomic) BOOL shouldUpdateAuthConfigOnSubThread;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

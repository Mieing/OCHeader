@class NSString, BDXBridgeAuthConfig, BDXBridgeAuthConfigBuilder, BDXBridgeAuthConfigFromGeckoBuilder, BDXBridgeAuthSetting, NSObject;
@protocol OS_dispatch_queue, BDXBridgeAuthConfigDownload;

@interface BDXBridgeAuthManager : NSObject

@property (retain, nonatomic) id<BDXBridgeAuthConfigDownload> authConfigDownload;
@property (retain, nonatomic) BDXBridgeAuthConfig *authConfig;
@property (retain, nonatomic) BDXBridgeAuthConfigBuilder *authConfigBuilder;
@property (retain, nonatomic) BDXBridgeAuthConfigFromGeckoBuilder *authConfigFromGeckoBuilder;
@property (copy, nonatomic) id /* block */ builtinAuthConfigBlock;
@property (copy, nonatomic) NSString *authConfigDiskPath;
@property (nonatomic) BOOL needUpdateAuthConfig;
@property (nonatomic) BOOL fetchingAuthConfig;
@property (retain, nonatomic) BDXBridgeAuthSetting *setting;
@property (copy, nonatomic) id /* block */ updateSettingBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL initUseLazyLoad;

+ (void)p_registerAndTiggerLoadConfig:(id /* block */)a0;
+ (id)getAuthConfigFromBuitinWithAccessKey:(id)a0;
+ (void)sendMonitor:(id)a0 aid:(id)a1;
+ (id)getRequestParamsFromBuilder:(id)a0;
+ (void)registerAuthConfigFromGeckoBuilder:(id /* block */)a0;
+ (void)registerBuiltinConfigBuilderWithAccessKey:(id)a0;
+ (id)sharedManager;

- (void)ensureLoadConfig;
- (void)registerAuthConfigBuilder:(id /* block */)a0;
- (void)didNetworkChanged:(id)a0;
- (void)updateRemoteAuthConfigIfNeeded;
- (void)loadLastCachedAuthConfigIfNeeded:(BOOL)a0;
- (void)loadBuiltinAuthConfigIfNeededWithBDXBridgeAuthConfigBuiltinBlock:(id /* block */)a0 forceSync:(BOOL)a1;
- (void)updateAuthSetting;
- (id)getAuthConfigFromDisk;
- (void)updateAuthConfigWithAuthConfig:(id)a0;
- (id)configFromToString:(long long)a0;
- (void)saveAuthConfigToDiskWithJsonObjs:(id)a0;
- (void)updateRemoteAuthConfig;
- (void)registerAuthSettingUpdate:(id /* block */)a0;
- (BOOL)isInCloseAuthUrlsWithUrlString:(id)a0;
- (id)initPrivate;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (id)init;

@end

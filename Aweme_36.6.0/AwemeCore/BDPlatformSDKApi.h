@class BDPlatformSDKConfiguration;

@interface BDPlatformSDKApi : NSObject

@property (nonatomic) BOOL enableDebug;
@property (retain, nonatomic) BDPlatformSDKConfiguration *productConf;

+ (id)currentProductDisplayName;
+ (id)currentProductiTunesUrl;
+ (void)bindConfiguration:(id)a0;
+ (BOOL)__canOpenURLSchemes:(id)a0;
+ (BOOL)sendReq:(id)a0;
+ (BOOL)isAPPInstalledForProduct:(long long)a0;
+ (BOOL)canOpenAPPSchemes:(id)a0;
+ (BOOL)application:(id)a0 openURL:(id)a1 delegate:(id)a2;
+ (BOOL)isValidAPPURLScheme:(id)a0;
+ (BOOL)sendResp:(id)a0;
+ (id)sharedInstance;
+ (id)sdkVersion;
+ (void)enableDebugMode:(BOOL)a0;

- (void)bindConfiguration:(id)a0;
- (BOOL)application:(id)a0 openURL:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end

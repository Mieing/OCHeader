@class NSMutableDictionary;

@interface IESSDKApi : NSObject

@property (retain, nonatomic) NSMutableDictionary *consumerProducts;
@property (nonatomic) long long consumerProductType;
@property (nonatomic) long long platformProductType;

+ (BOOL)sendReq:(id)a0;
+ (BOOL)application:(id)a0 openURL:(id)a1 delegate:(id)a2;
+ (BOOL)sendResp:(id)a0;
+ (id)getAppiTunesUrl;
+ (BOOL)registerProduct:(id)a0;
+ (BOOL)isAppSupported;
+ (BOOL)application:(id)a0 openURL:(id)a1 delegate:(id)a2 forProduct:(long long)a3;
+ (BOOL)isAppInstalledForProduct:(long long)a0;
+ (BOOL)isAppSupportedForProduct:(long long)a0;
+ (id)getAppiTunesUrlForProduct:(long long)a0;
+ (BOOL)registerProductType:(long long)a0;
+ (id)currentVersion;
+ (id)sharedInstance;
+ (BOOL)isAppInstalled;

- (BOOL)registerProduct:(id)a0;
- (id)iessdk_productConfForProductType:(long long)a0;
- (id)iessdk_allProducts;
- (id)iessdk_consumerKeyForProductType:(long long)a0;
- (id)iessdk_consumerSecretForProductType:(long long)a0;
- (id)iessdk_productNameForProductType:(long long)a0;
- (id)iessdk_optimalURLSchemeForProductType:(long long)a0;
- (id)iessdk_optimalInstalledURLSchemeForProductType:(long long)a0;
- (id)iessdk_iTunesUrlForProductType:(long long)a0;
- (BOOL)iessdk_isValidProductConfForProductType:(long long)a0;
- (BOOL)isAppInstalledForProduct:(long long)a0;
- (BOOL)isAppSupportedForProduct:(long long)a0;
- (id)getAppiTunesUrlForProduct:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

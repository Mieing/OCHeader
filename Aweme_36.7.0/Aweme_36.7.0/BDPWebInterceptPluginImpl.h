@class NSArray, NSString;

@interface BDPWebInterceptPluginImpl : NSObject <BDPWebViewNetInterceptDelegate, WKWebViewNetworkDelegate>

@property (nonatomic) BOOL disableAddReferCookie;
@property (nonatomic) BOOL enableImagePrefetch;
@property (copy, nonatomic) NSArray *disableList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)webview:(id)a0 extraHeaderDictionaryForRequest:(id)a1;
- (BOOL)isPageValid:(id)a0;
- (void)configurationDidInit:(id)a0;
- (void)webviewDidInit:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

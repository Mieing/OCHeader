@class NSArray, NSHashTable;
@protocol IESFalconInterceptionDelegate;

@interface IESFalconManager : NSObject

@property (class, retain) id<IESFalconInterceptionDelegate> interceptionDelegate;
@property (class, nonatomic) BOOL interceptionLock;
@property (class, nonatomic) BOOL webpDecodeEnable;
@property (class, nonatomic) BOOL interceptionDisableWKHttpScheme;
@property (class, nonatomic) BOOL interceptionWKHttpScheme;
@property (class, nonatomic) BOOL interceptionEnable;
@property (class, nonatomic) BOOL interceptionInstanceLevelEnable;
@property (class, copy, nonatomic) id /* block */ defaultUABlock;
@property (class, nonatomic) BOOL interceptionUseFalconURLSchemaHandle;
@property (class, readonly, nonatomic) NSHashTable *monitorInterceptors;
@property (class, readonly, copy, nonatomic) NSArray *customInterceptors;

+ (id)falconMetaDataForURLRequest:(id)a0;
+ (void)addInterceptor:(id)a0;
+ (void)bdw_URLProtocolTask:(id)a0 didReceiveResponse:(id)a1;
+ (void)removeInterceptor:(id)a0;
+ (void)bdw_URLProtocolTask:(id)a0 didLoadData:(id)a1;
+ (void)bdw_URLProtocolTaskDidFinishLoading:(id)a0;
+ (void)bdw_URLProtocolTask:(id)a0 didFailWithError:(id)a1;
+ (void)bdw_URLProtocolTask:(id)a0 didPerformRedirection:(id)a1 newRequest:(id)a2;
+ (id)falconDataForURLRequest:(id)a0;
+ (BOOL)shouldInterceptForRequest:(id)a0;
+ (id)falconMetaDataForURLRequest:(id)a0 webView:(id)a1;
+ (void)callingOutFalconInterceptedRequest:(id)a0 willLoadFromCache:(BOOL)a1;
+ (BOOL)willBlockRequest:(id)a0;
+ (id)willDecorateRequest:(id)a0;
+ (void)willDecorateURLProtocolTask:(id)a0;
+ (void)webView:(id)a0 loadRequest:(id)a1 metaData:(id)a2;
+ (void)registerCustomInterceptor:(id)a0;
+ (void)unregisterCustomInterceptor:(id)a0;
+ (void)registerPattern:(id)a0 forSearchPath:(id)a1;
+ (void)registerPatterns:(id)a0 forSearchPath:(id)a1;
+ (void)unregisterPatterns:(id)a0;
+ (void)registerPattern:(id)a0 forGurdAccessKey:(id)a1;
+ (void)registerPatterns:(id)a0 forGurdAccessKey:(id)a1;
+ (void)createFileInterceptorIfNeeded;
+ (void)createGurdInterceptorIfNeeded;
+ (unsigned long long)_findCustomInterceptionInsertIndex:(id)a0 mutableContainer:(id)a1;
+ (BOOL)shouldInterceptForRequest:(id)a0 webView:(id)a1;
+ (id)__webviewWithUserAgent:(id)a0;
+ (id)_customInterceptionFalconMetaDataForURLRequest:(id)a0 additionalInterceptors:(id)a1 disableGlobalInterceptors:(BOOL)a2;
+ (id)_defaultInterceptionFalconMetaDataForURLRequest:(id)a0;
+ (void)recordFalconMetaData:(id)a0 forRequest:(id)a1;
+ (id)_metaDataWithRequest:(id)a0 interceptor:(id)a1;
+ (BOOL)__decoratedWebView:(id)a0 withUUID:(id)a1;
+ (id)__weakWebViewTable;
+ (id)__uuidFromUserAgent:(id)a0 withPrefix:(id)a1;
+ (id)falconDataForURLRequest:(id)a0 webView:(id)a1;
+ (id)_customInterceptionFalconMetaDataForURLRequest:(id)a0;
+ (id)fetchGlobalMonitorsFromWebInterceptor;
+ (BOOL)decorateFalconWebView:(id)a0 withUUID:(id)a1;
+ (void)decoratedFalconUserAgentWithWebView:(id)a0;
+ (id)webviewWithUserAgent:(id)a0;
+ (void)webView:(id)a0 didFinishNavigation:(id)a1;
+ (void)initialize;

@end

@class NSCache, WKWebView, NSString;

@interface BDFalconResourceLoaderInterceptor : NSObject <IESFalconCustomInterceptor>

@property (weak, nonatomic) WKWebView *webview;
@property (retain, nonatomic) NSCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupWithWebView:(id)a0;

- (id)falconMetaDataForURLRequest:(id)a0;
- (id)falconDataForURLRequest:(id)a0;
- (unsigned long long)falconPriority;
- (BOOL)shouldInterceptForRequest:(id)a0;
- (id)p_falconDataForURLRequest:(id)a0 metaData:(id)a1;
- (void)assignMetaData:(id)a0 resource:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

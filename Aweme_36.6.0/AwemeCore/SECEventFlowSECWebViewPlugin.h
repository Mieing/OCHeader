@class NSString;

@interface SECEventFlowSECWebViewPlugin : NSObject <SECWebViewPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupFeatureDetector:(id)a0;

- (void)webView:(id)a0 prepareLoaderContext:(id)a1;
- (void)webView:(id)a0 changedURLFrom:(id)a1 toURL:(id)a2;

@end

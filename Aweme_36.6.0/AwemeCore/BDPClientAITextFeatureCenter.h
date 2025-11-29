@class NSOperationQueue, NSString, BDPThreadSafeDictionary;

@interface BDPClientAITextFeatureCenter : NSObject <BDPClientAITextFeatureCenter>

@property (retain, nonatomic) NSOperationQueue *taskQueue;
@property (retain, nonatomic) BDPThreadSafeDictionary *keyOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)pageWillRecycle:(id)a0 webview:(id)a1;
- (void)executeJSScriptWithPagePath:(id)a0 webView:(id)a1 jsCode:(id)a2 needCache:(BOOL)a3 completion:(id /* block */)a4;
- (void)executeJSScriptWithPagePath:(id)a0 webView:(id)a1 jsCode:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end

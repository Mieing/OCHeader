@class BDPWKGamePage, NSMutableDictionary, NSRecursiveLock, NSString, NSObject;
@protocol BDPWebViewImplInterface, OS_dispatch_queue;

@interface BDPWKGameURLSchemeHandler : NSObject <WKURLSchemeHandler>

@property (weak, nonatomic) id<BDPWebViewImplInterface> bridgeImpl;
@property (weak, nonatomic) BDPWKGamePage *webview;
@property (retain, nonatomic) NSMutableDictionary *holdUrlSchemeTasks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSRecursiveLock *bufferLock;
@property (retain, nonatomic) NSMutableDictionary *bufferDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)launchRequiredFileList;

- (void)handleSCHttpRequest:(id)a0 webView:(id)a1;
- (void)handleBrotliDecompress:(id)a0 withUniqueID:(id)a1;
- (void)didFinish:(id)a0 statusCode:(long long)a1 message:(id)a2;
- (void)didFinish:(id)a0 statusCode:(long long)a1 data:(id)a2 mimeType:(id)a3;
- (id)createResponse:(id)a0 statusCode:(long long)a1 contentLength:(long long)a2 contentType:(id)a3 headerFields:(id)a4;
- (id)initWithBridgeImpl:(id)a0 andWebview:(id)a1;
- (void)handleBridgeRequest:(id)a0 withWebview:(id)a1;
- (void)handleEnvRequest:(id)a0 withUniqueID:(id)a1;
- (void)handleFetchPredefineFilesRequest:(id)a0 withUniqueID:(id)a1;
- (void)handleEnablePredefineRequest:(id)a0 withUniqueID:(id)a1;
- (void)handleTTFileRequest:(id)a0 withUniqueID:(id)a1;
- (void)handlePluginFileRequest:(id)a0 withUniqueID:(id)a1;
- (void)handleRealHTTPRequest:(id)a0 withUniqueID:(id)a1;
- (void)handleBDPFileRequest:(id)a0 withUniqueID:(id)a1;
- (void)handleBufferBridgeRequest:(id)a0 withWebview:(id)a1;
- (void)handleBufferBridgeRequestV2:(id)a0 withWebview:(id)a1;
- (void)handleSubscribeBridgeData:(id)a0 withUniqueID:(id)a1;
- (void)handleZlibProcess:(id)a0 withUniqueID:(id)a1;
- (void)handleMediaRecorderSolutionRequest:(id)a0 withUniqueID:(id)a1;
- (void)handleMediaRecorderFPSRequest:(id)a0 withUniqueID:(id)a1;
- (void)handleShouldUseArrayBufferRequest:(id)a0 withUniqueID:(id)a1;
- (void)handleUseStrictMode:(id)a0 withUniqueID:(id)a1;
- (void)didFinish:(id)a0 statusCode:(long long)a1 message:(id)a2 mimeType:(id)a3;
- (void)handleWKKryptonRequest:(id)a0 uniqueID:(id)a1;
- (void)didFinish:(id)a0 statusCode:(long long)a1 data:(id)a2 mimeType:(id)a3 headerFields:(id)a4;
- (void).cxx_destruct;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;

@end

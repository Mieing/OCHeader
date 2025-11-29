@class NSMutableDictionary, NSString, BDPStarkPage, NSObject;
@protocol OS_dispatch_queue;

@interface BDPStarkWKURLSchemeHandler : NSObject <WKURLSchemeHandler>

@property (retain, nonatomic) NSMutableDictionary *holdUrlSchemeTasks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (weak, nonatomic) BDPStarkPage *page;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleHttpRequest:(id)a0 uniqueID:(id)a1 model:(id)a2;
- (void)handleSCHttpRequest:(id)a0 webView:(id)a1;
- (void)handleSCFileRequest:(id)a0 uniqueID:(id)a1 model:(id)a2;
- (void)handleSCPredefineFileRequest:(id)a0 uniqueID:(id)a1 model:(id)a2;
- (void)handleSCBridgeRequest:(id)a0 uniqueID:(id)a1;
- (void)handleStarkEntryRequest:(id)a0 uniqueID:(id)a1;
- (void)handleStarkZlibProcess:(id)a0 uniqueID:(id)a1;
- (void)handleStarkSubscribeBridgeData:(id)a0 withUniqueID:(id)a1;
- (void)handleBrotliDecompress:(id)a0 withUniqueID:(id)a1;
- (void)handleStarkKryptonRequest:(id)a0 uniqueID:(id)a1;
- (void)handleStarkLogRequest:(id)a0;
- (BOOL)tryToLoadFromPackage:(id)a0 uniqueID:(id)a1 model:(id)a2;
- (void)tryToLoadFromLocalFile:(id)a0 localPath:(id)a1 doRequestIfError:(BOOL)a2 uniqueID:(id)a3 model:(id)a4;
- (void)request:(id)a0 cachePath:(id)a1 uniqueID:(id)a2 model:(id)a3;
- (void)didFinish:(id)a0 statusCode:(long long)a1 message:(id)a2;
- (void)didFinish:(id)a0 statusCode:(long long)a1 data:(id)a2 contentType:(id)a3 headerFields:(id)a4;
- (void)tryToSaveFileToLocal:(id)a0 localPath:(id)a1 uniqueID:(id)a2 model:(id)a3;
- (void)tryToDeleteFileFromLocal:(id)a0 localPath:(id)a1 uniqueID:(id)a2 model:(id)a3;
- (id)getVersionMarkWithUniqueID:(id)a0;
- (void)didFinish:(id)a0 statusCode:(long long)a1 data:(id)a2;
- (void)didFinish:(id)a0 statusCode:(long long)a1 data:(id)a2 mimeType:(id)a3;
- (void)cacheDataIfNeed:(id)a0 cachePath:(id)a1 data:(id)a2 uniqueID:(id)a3 model:(id)a4;
- (BOOL)checkStorageSizeExceedLimit:(id)a0 dataLength:(unsigned long long)a1 uniqueID:(id)a2;
- (id)createResponse:(id)a0 statusCode:(long long)a1 contentLength:(long long)a2 contentType:(id)a3 headerFields:(id)a4;
- (id)createResponse:(id)a0 statusCode:(long long)a1 contentLength:(long long)a2 contentType:(id)a3;
- (void).cxx_destruct;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (id)initWithPage:(id)a0;

@end

@class WCURLSession, NSString, MPPageFastLoadWXPicDecoder, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MPOverMarsNetworkSchemeHandler : NSObject <WCURLSessionDataDelegate, WKURLSchemeHandler>

@property (retain, nonatomic) WCURLSession *marsSession;
@property (retain, nonatomic) NSMutableArray *tasks;
@property (retain, nonatomic) MPPageFastLoadWXPicDecoder *wxpicDecoder;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *decodeSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isURLSupportWxPic:(id)a0;

- (id)init;
- (id)customScheme;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;
- (void)startURLSchemeTask:(id)a0 originURLComponents:(id)a1;
- (id)create404ResponseForURL:(id)a0;
- (void)stopTask:(id)a0 withResponse:(id)a1 data:(id)a2;
- (void)stopTaskBySchemeTask:(id)a0;
- (void)removeTaskBySessionTask:(id)a0;
- (id)networkTaskForSessionTask:(id)a0;
- (id)decodeWxPicDataIfNeed:(id)a0 task:(id)a1 response:(id)a2 error:(id *)a3;
- (id)getImageTypeFromTask:(id)a0;
- (id)getImageContentTypeFromTask:(id)a0;
- (id)createSuccessResponseForImageData:(id)a0 contentType:(id)a1 originResponse:(id)a2;
- (void)WCURLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)WCURLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)WCURLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void).cxx_destruct;

@end

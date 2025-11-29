@class NSError, NSString, NSURLSessionTask, NSThread, QBASIHTTPRequest, NSURLConnection, NSURLRequest;
@protocol QBNetworkDelegate;

@interface QBNetwork : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, QBASIHTTPRequestDelegate> {
    NSURLSessionTask *_nsurlSessionTask;
    NSURLConnection *_nsurlConnection;
    BOOL _iscancel;
    NSThread *_currentThread;
    BOOL _isProtocol;
    QBASIHTTPRequest *_asiHttpRequest;
    NSURLRequest *_currentRequest;
    NSError *_httpsError;
}

@property (weak) id<QBNetworkDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)defaultSessionSON;
+ (BOOL)canSessionON;
+ (id)sendSynchronousRequest:(id)a0 needSession:(BOOL)a1 returningResponse:(id *)a2 error:(id *)a3;
+ (id)NSErrorForASIRequest:(id)a0;

- (id)initWithRequest:(id)a0 delegate:(id)a1 isProtocol:(BOOL)a2 needSession:(BOOL)a3;
- (void)cancel;
- (void)request:(id)a0 didReceiveResponseHeaders:(id)a1;
- (void)request:(id)a0 willRedirectToURL:(id)a1;
- (void)requestFinished:(id)a0;
- (void)requestFailed:(id)a0;
- (void)request:(id)a0 didReceiveData:(id)a1;
- (void)retryErrorRequest:(id)a0;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (id)connection:(id)a0 willCacheResponse:(id)a1;
- (BOOL)connectionShouldUseCredentialStorage:(id)a0;
- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)postRedict:(id)a0;
- (void)postReceiveResp:(id)a0;
- (void)postReceiveData:(id)a0;
- (void)postFinish;
- (void)postError:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end

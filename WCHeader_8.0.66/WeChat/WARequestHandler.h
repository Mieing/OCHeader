@class WARequestConfig, NSString, NSURLSession, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface WARequestHandler : NSObject <WARequestTaskDelegate, NSURLSessionTaskDelegate> {
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workQueue;
    WARequestConfig *_requestConfig;
    BOOL _hasInvalidate;
    NSMutableArray *_arrRequestTask;
    NSURLSession *_urlSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0 appVersion:(unsigned long long)a1 workerQueue:(id)a2 context:(id)a3;
- (void)dealloc;
- (void)startRequestTaskWithURL:(id)a0 ip:(id)a1 port:(unsigned int)a2 host:(id)a3 forbidReuse:(BOOL)a4 taskID:(id)a5 data:(id)a6 httpHeaders:(id)a7 method:(id)a8 isIgnoreCheckDomain:(BOOL)a9 context:(id)a10 completionHandler:(id /* block */)a11 isUseCronet:(BOOL)a12 useQuic:(BOOL)a13 useHttp2:(BOOL)a14 useCache:(BOOL)a15 useChunked:(BOOL)a16 appType:(unsigned int)a17 forceCellularNetwork:(BOOL)a18;
- (BOOL)abortRequestTask:(id)a0 getError:(id *)a1;
- (void)invalidate;
- (long long)requestTaskCount;
- (BOOL)isExceedMaxTaskCount;
- (id)getNewRequestTask:(id)a0 isUseCronet:(BOOL)a1 useQuic:(BOOL)a2 useHttp2:(BOOL)a3 useCache:(BOOL)a4 useChunked:(BOOL)a5 appType:(unsigned int)a6 context:(id)a7;
- (id)getRequestTaskWithTask:(id)a0;
- (id)getRequestTaskWithTaskID:(id)a0;
- (void)deleteTask:(id)a0;
- (void)cancelAndDeleteAllTaskWithError:(id)a0 errNo:(id)a1 isInvalidate:(BOOL)a2;
- (void)setupNSURLSession;
- (BOOL)isIgnoreCheckDomainWithSessionTask:(id)a0;
- (void)markRedirectFailWithSessionTask:(id)a0 host:(id)a1;
- (unsigned int)maxTaskCount;
- (unsigned int)timeoutMS;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)requestTaskDidEnd:(id)a0;
- (void).cxx_destruct;

@end

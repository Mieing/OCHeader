@class NSString;

@interface TTHttpTask : NSObject <BDARVCancelableTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long state;
@property (nonatomic) double recvHeaderTimeout;
@property (nonatomic) double readDataTimeout;
@property (nonatomic) double protectTimeout;
@property double timeoutInterval;
@property BOOL skipSSLCertificateError;
@property BOOL isStreamingTask;
@property (nonatomic) BOOL enableHttpCache;
@property (nonatomic) BOOL enableCustomizedCookie;
@property long long loadFlags;
@property unsigned int requestTypeFlags;
@property (copy, nonatomic) NSString *originalHost;
@property (copy, nonatomic) NSString *dispatchedHost;
@property (nonatomic) double dispatchTime;
@property (nonatomic) BOOL sentAlready;
@property (nonatomic) BOOL needChunkedDataCallbckOnNon2xx;

- (void)setThrottleNetSpeed:(long long)a0;
- (void)setDownloadProgressCallback:(id /* block */)a0;
- (void)setHeaderCallback:(id /* block */)a0;
- (void)setUploadProgressCallback:(id /* block */)a0;
- (BOOL)getIsDirectlyDispatchedFromIOThread;
- (void)readDataOfMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (id)request;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)cancel;

@end

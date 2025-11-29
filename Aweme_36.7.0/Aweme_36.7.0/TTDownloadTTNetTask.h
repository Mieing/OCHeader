@class TTHttpTask, NSString;

@interface TTDownloadTTNetTask : NSObject <TTDownloadTaskProtocol>

@property (retain, nonatomic) TTHttpTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThrottleNetSpeed:(long long)a0;
- (void)setProtectTimeout:(double)a0;
- (void)setRecvHeaderTimeout:(double)a0;
- (void)setReadDataTimeout:(double)a0;
- (id)initWithTTNetTask:(id)a0;
- (void)setEnableHttpCache:(BOOL)a0;
- (void)setSkipSSLCertificateError:(BOOL)a0;
- (void)setNoProxy:(BOOL)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)setTimeoutInterval:(double)a0;
- (void)cancel;

@end

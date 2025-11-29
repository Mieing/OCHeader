@class TTHttpTask;

@interface TTHttpTaskWrapper : TTHttpTask {
    BOOL _skipSSLCertificateError;
    BOOL _isStreamingTask;
    BOOL _enableHttpCache;
    BOOL _enableCustomizedCookie;
    unsigned int _requestTypeFlags;
    double _recvHeaderTimeout;
    double _readDataTimeout;
    double _protectTimeout;
    double _timeoutInterval;
    long long _loadFlags;
}

@property (retain) TTHttpTask *innerTask;
@property long long tempState;
@property float innerPriority;
@property (copy) id /* block */ readDataBlock;

- (void)setProtectTimeout:(double)a0;
- (void)setRecvHeaderTimeout:(double)a0;
- (void)setReadDataTimeout:(double)a0;
- (long long)loadFlags;
- (void)setLoadFlags:(long long)a0;
- (BOOL)enableHttpCache;
- (void)setEnableHttpCache:(BOOL)a0;
- (double)protectTimeout;
- (double)recvHeaderTimeout;
- (double)readDataTimeout;
- (void)setSkipSSLCertificateError:(BOOL)a0;
- (void)setIsStreamingTask:(BOOL)a0;
- (BOOL)skipSSLCertificateError;
- (BOOL)isStreamingTask;
- (void)setRequestTypeFlags:(unsigned int)a0;
- (BOOL)enableCustomizedCookie;
- (unsigned int)requestTypeFlags;
- (void)setEnableCustomizedCookie:(BOOL)a0;
- (void)importInnerTask:(id)a0;
- (void)readDataOfMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (double)timeoutInterval;
- (void)suspend;
- (long long)state;
- (id)request;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)setTimeoutInterval:(double)a0;
- (void)cancel;

@end

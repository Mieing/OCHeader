@class NSString, NSMutableDictionary, TTDownloadRequestModel;

@interface RacingTask : NSObject <TTDownloadTaskProtocol>

@property (retain, nonatomic) TTDownloadRequestModel *model;
@property (retain, nonatomic) NSMutableDictionary *taskDic;
@property char wonTaskIndex;
@property (nonatomic) long long excessBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThrottleNetSpeed:(long long)a0;
- (void)setProtectTimeout:(double)a0;
- (void)setRecvHeaderTimeout:(double)a0;
- (void)setReadDataTimeout:(double)a0;
- (void)addTTNetTask:(char)a0 ttnetTask:(id)a1;
- (void)onHeaderCallback:(char)a0 response:(id)a1;
- (void)onProgressCallback:(char)a0 current:(long long)a1 total:(long long)a2;
- (void)onResultCallback:(char)a0 response:(id)a1 filePath:(id)a2 error:(id)a3;
- (void)setEnableHttpCache:(BOOL)a0;
- (void)setSkipSSLCertificateError:(BOOL)a0;
- (void)setNoProxy:(BOOL)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)setTimeoutInterval:(double)a0;
- (void)dealloc;
- (void)cancel;

@end

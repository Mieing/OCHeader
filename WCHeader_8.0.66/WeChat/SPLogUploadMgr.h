@class MMSilentPushReporter, NSString;

@interface SPLogUploadMgr : MMRootService <MMServiceProtocol, VoIPPushKitExt>

@property (retain, nonatomic) MMSilentPushReporter *logReporter;
@property (retain, nonatomic) NSString *m_realReportUrl;
@property (retain, nonatomic) NSString *m_realHost;
@property (nonatomic) unsigned long long m_packageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xmlStringFromCgContent:(id)a0;
+ (id)silentPushBackgroundURLSessionIndentifierPrefix;

- (id)init;
- (void)onServiceInit;
- (void)lazyInitLogReporter;
- (void)onReceiveVoIPPushInfo:(id)a0;
- (BOOL)onIPxx:(id)a0;
- (id)getUserName;
- (void)upload:(id)a0;
- (void)handleLogUpload:(id)a0;
- (id)makeHttpRequest:(id)a0;
- (unsigned long long)stackLength:(id)a0;
- (unsigned long long)uploadId;
- (void)handleSilentPushLogUploadTaskWithURLSessionID:(id)a0;
- (void).cxx_destruct;

@end

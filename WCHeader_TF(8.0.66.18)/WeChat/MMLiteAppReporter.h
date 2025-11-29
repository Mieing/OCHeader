@interface MMLiteAppReporter : NSObject {
    struct Handle<std::shared_ptr<luggage::LiteAppReporter>> { struct shared_ptr<luggage::LiteAppReporter> { struct LiteAppReporter *__ptr_; struct __shared_weak_count *__cntrl_; } m_obj; } _cppRefHandle;
}

+ (id)makeLiteAppReporter:(id)a0;
+ (id)makeLiteAppReporterWithoutAppId;
+ (id)create:(id)a0 dependency:(id)a1;

- (id)initWithCpp:(const void *)a0;
- (void)report:(id)a0;
- (void)logStart:(long long)a0;
- (void)logStart:(long long)a0 logIntValue:(long long)a1;
- (void)logStart:(long long)a0 logStringValue:(id)a1;
- (void)logStart:(long long)a0 logStringValue:(id)a1 logIntValue:(long long)a2;
- (void)logStart:(long long)a0 extInfo:(id)a1;
- (void)logStart:(long long)a0 logIntValue:(long long)a1 extInfo:(id)a2;
- (void)logStart:(long long)a0 logStringValue:(id)a1 extInfo:(id)a2;
- (void)logStartWithUri:(long long)a0 uri:(id)a1;
- (void)logStartWithExpandDimension1:(long long)a0 expandDimension1:(id)a1;
- (void)logRunning:(long long)a0;
- (void)logRunning:(long long)a0 logIntValue:(long long)a1;
- (void)logRunning:(long long)a0 logStringValue:(id)a1;
- (void)logRunning:(long long)a0 logStringValue:(id)a1 logIntValue:(long long)a2;
- (void)logRunning:(long long)a0 extInfo:(id)a1;
- (void)logRunning:(long long)a0 logIntValue:(long long)a1 extInfo:(id)a2;
- (void)logRunning:(long long)a0 logStringValue:(id)a1 extInfo:(id)a2;
- (void)logRunningWithUri:(long long)a0 uri:(id)a1;
- (void)logRunningWithExpandDimension1:(long long)a0 expandDimension1:(id)a1;
- (void)logDownload:(long long)a0;
- (void)logDownload:(long long)a0 logIntValue:(long long)a1;
- (void)logDownload:(long long)a0 logStringValue:(id)a1;
- (void)logDownload:(long long)a0 logStringValue:(id)a1 logIntValue:(long long)a2;
- (void)logDownload:(long long)a0 extInfo:(id)a1;
- (void)logDownload:(long long)a0 logIntValue:(long long)a1 extInfo:(id)a2;
- (void)logDownload:(long long)a0 logStringValue:(id)a1 extInfo:(id)a2;
- (void)logDownloadWithUri:(long long)a0 uri:(id)a1;
- (void)logDownloadWithExpandDimension1:(long long)a0 expandDimension1:(id)a1;
- (void)logOther:(long long)a0;
- (void)logOther:(long long)a0 logIntValue:(long long)a1;
- (void)logOther:(long long)a0 logStringValue:(id)a1;
- (void)logOther:(long long)a0 logStringValue:(id)a1 logIntValue:(long long)a2;
- (void)logOther:(long long)a0 extInfo:(id)a1;
- (void)logOther:(long long)a0 logIntValue:(long long)a1 extInfo:(id)a2;
- (void)logOther:(long long)a0 logStringValue:(id)a1 extInfo:(id)a2;
- (void)logOtherWithUri:(long long)a0 uri:(id)a1;
- (void)logOtherWithExpandDimension1:(long long)a0 expandDimension1:(id)a1;
- (id)getSessionId;
- (BOOL)isSampling;
- (id)getAppId;
- (void)setAppId:(id)a0;
- (id)getVersion;
- (void)setVersion:(id)a0;
- (long long)getScene;
- (void)setScene:(long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

@class NSObject, HMDClassCoverageUploader, HMDClassCoverageChecker;
@protocol OS_dispatch_queue;

@interface HMDClassCoverageManager : HeimdallrModule

@property (retain, nonatomic) HMDClassCoverageChecker *checker;
@property (retain, nonatomic) HMDClassCoverageUploader *uploader;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *managerQueue;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (void)runTaskIndependentOfStart;
- (BOOL)needSyncStart;
- (void)uploadData;
- (BOOL)isConfigurationSupported;
- (void)activateClassCoverageChecker;
- (BOOL)isUploadEnvSupported;
- (BOOL)isAppUpdated;
- (void)manuallyGenerateReportWithCheckInterval:(double)a0 wifiOnly:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (BOOL)isDeviceSupported;

@end

@class HMDLoadUploadContext, NSString, NSArray, MXDiagnosticPayload, HMDMetricKitLoadLaunchUploader, NSObject, HMDMetrickitConfig;
@protocol OS_dispatch_queue;

@interface HMDMetricKitLoadLauncher : NSObject <MXMetricManagerSubscriber> {
    NSObject<OS_dispatch_queue> *_serailQueueForDiagnostic;
    MXDiagnosticPayload *_currentDiagnosticPayloadToUpload;
    HMDMetrickitConfig *_config;
    NSArray *_mainAddressRecords;
    HMDLoadUploadContext *_context;
    HMDMetricKitLoadLaunchUploader *_uploader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isUploadingLoadCrash;
+ (BOOL)loadLaunched;
+ (BOOL)whetherDiagnosticsAlreayUploadedByLoadLauncher:(id)a0;
+ (id)sharedInstance;
+ (id)currentSessionID;
+ (void)deinit;

- (BOOL)whetherCrashBeforeHeimdallrSetup:(id)a0;
- (void)dealWithPayload:(id)a0;
- (void)startWithConfig:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)didReceiveDiagnosticPayloads:(id)a0;

@end

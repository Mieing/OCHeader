@class NSString, HMDCrashMetaData, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCrashEventLogger : NSObject <HMDURLPathProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isUploading;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDCrashMetaData *currentMeta;

+ (void)logCrashEvent:(id)a0;
+ (void)logUploadEvent:(id)a0 error:(id)a1 backgroundSession:(BOOL)a2;
+ (id)sharedInstance;

- (id)URLPathProviderURLPath:(id)a0;
- (void)_logCrashEvent:(id)a0;
- (void)_logUploadEvent:(id)a0 error:(id)a1 backgroundSession:(BOOL)a2;
- (void)uploadAllEvents;
- (void)_uploadAllEvents;
- (id)collectAllFileNames;
- (id)constructPostDataWithFileNames:(id)a0;
- (void)cleanUpWithFileNames:(id)a0;
- (id)constructPostDataWithFileName:(id)a0;
- (void)logCrashEvent:(id)a0;
- (void)logUploadEvent:(id)a0 error:(id)a1 backgroundSession:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;

@end

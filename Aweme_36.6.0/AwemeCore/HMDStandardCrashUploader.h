@class NSString, HMDURLBackgrounSessionManager, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDStandardCrashUploader : NSObject <HMDURLPathProvider, HMDURLBackgrounSessionManagerDelegate, HMDCrashUploader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue;
@property (retain, nonatomic) HMDURLBackgrounSessionManager *backgroundSessionManager;
@property (nonatomic) BOOL isBackgroundSessionInvalid;
@property (retain, nonatomic) NSMutableSet *uploadingFileNames;
@property (retain, nonatomic) NSMutableSet *previousUploadFileNames;
@property (copy, nonatomic) NSString *crashPath;
@property BOOL ttnetReady;
@property (nonatomic) double lastCrashTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)URLPathProviderURLPath:(id)a0;
- (void)uploadCrashLogIfNeeded:(BOOL)a0;
- (void)ttnetReadyNotification;
- (void)asyncUploadCrashLogIfNeeded;
- (void)syncUploadCrashLogIfNeeded;
- (void)_uploadCrashLogIfNeeded;
- (void)createBackgroundSessionManagerIfNeed;
- (void)_uploadCrashLogForPath:(id)a0;
- (void)handleCrashlogUpload:(id)a0 didCompleteWithResponseObject:(id)a1 error:(id)a2 isBackgroundSession:(BOOL)a3;
- (void)_uploadCrashLogForFileName:(id)a0;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithResponseObject:(id)a2 error:(id)a3;
- (void)handleCrashlogUpload:(id)a0 didCompleteWithResponseObject:(id)a1 error:(id)a2;
- (void)applicationWillEnterForeground:(id)a0;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end

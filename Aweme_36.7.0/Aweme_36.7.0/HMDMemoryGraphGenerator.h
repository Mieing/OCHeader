@class NSString, HMDMemoryGraphUploader, HMDMemoryChecker, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMemoryGraphGenerator : HeimdallrModule <HMDAPPExitReasonDetectorProtocol>

@property (retain, nonatomic) HMDMemoryChecker *checker;
@property (retain, nonatomic) HMDMemoryGraphUploader *uploader;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *generateQueue;
@property (nonatomic) BOOL memoryWarningReceived;
@property (copy, nonatomic) NSDictionary *filters;
@property (copy, nonatomic) NSDictionary *context;
@property (nonatomic) BOOL isMemorySurge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedGenerator;
+ (BOOL)lastTimeMemoryDumpInterrupt;

- (void)updateConfig:(id)a0;
- (void)runTaskIndependentOfStart;
- (BOOL)needSyncStart;
- (unsigned long long)startEnabled;
- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (void)didReceiveMemoryWarningNotification:(id)a0;
- (void)memoryGraphSupportSatrtup;
- (void)activateMemoryChecker;
- (void)didReceiveMemoryPeakedNotification:(id)a0;
- (void)didReceiveMemoryWillPeakedNotification:(id)a0;
- (id)memoryGraphUnsupportedReason:(unsigned long long)a0;
- (BOOL)exceedLimitPerDayForConfig:(id)a0;
- (void)increaseGenerateTimesAndCheckLimit;
- (void)doGenerateMemoryGraphActivateManner:(id)a0 memoryInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1 minRemainingMemoryMB:(unsigned long long)a2 completeBlock:(id /* block */)a3;
- (void)manualGenerateImmediateUpload:(BOOL)a0 activateManner:(id)a1 finishBlock:(id /* block */)a2;
- (void)manualGenerateImmediateUpload:(BOOL)a0 activateManner:(id)a1 customFilters:(id)a2 customContext:(id)a3 finishBlock:(id /* block */)a4;
- (void)resetMemorySurgeFlag;
- (void)zipMemoryGraphWithIdentifier:(id)a0 activateManner:(id)a1 immediateUpload:(BOOL)a2 completeBlock:(id /* block */)a3;
- (void)manualGenerateImmediateUpload:(BOOL)a0 finishBlock:(id /* block */)a1;
- (void)cloudCommandGenerateWithRemainingMemory:(unsigned long long)a0 completeBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;
- (unsigned long long)isDeviceSupported;

@end

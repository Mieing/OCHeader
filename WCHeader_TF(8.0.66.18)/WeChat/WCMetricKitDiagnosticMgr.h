@class NSDateFormatter, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WCMetricKitDiagnosticMgr : MMRootService <IMatrixCustomIssueExt, MMServiceProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *uploadingFiles;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSDateFormatter *timeFormatter;
@property (nonatomic) BOOL crashShouldReport;
@property (nonatomic) BOOL hangShouldReport;
@property (nonatomic) BOOL cpuExceptionShouldReport;
@property (nonatomic) BOOL diskWriteExceptionShouldReport;
@property (nonatomic) BOOL appLaunchShouldReport;
@property (nonatomic) BOOL dropUnawareCrash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enableForceReportForLastTermination;
+ (void)updateVoipInfo:(int)a0 lastVoipTimestamp:(double)a1;

- (void)onServiceInit;
- (void)didReceiveDiagnosticPayload:(id)a0;
- (void)p_didReceiveDiagnosticPayload:(id)a0;
- (void)didReceiveDiagnostic:(id)a0 dumpType:(unsigned long long)a1 extraInfo:(id)a2;
- (void)saveDiagnostic:(id)a0 dumpType:(unsigned long long)a1 extraInfo:(id)a2;
- (void)addExtraInfo:(id)a0 timeStampEnd:(id)a1;
- (void)addUserInfo:(id)a0;
- (id)deviceInfo;
- (id)processInfo;
- (id)memoryInfo;
- (id)timeInfo;
- (id)heavyUserInfo;
- (id)voipInfo:(double)a0;
- (unsigned int)reviseClientVersion:(double)a0;
- (BOOL)isUnawareCrash:(id)a0;
- (id)byteToMegabyte:(unsigned long long)a0;
- (id)getStringOfExceptionType:(id)a0;
- (id)getStringOfSignal:(id)a0;
- (void)uploadWithDate:(id)a0;
- (void)uploadWithDate:(id)a0 forceAll:(BOOL)a1;
- (void)upload:(id)a0;
- (void)onCustomIssue:(id)a0 uploadComplete:(BOOL)a1;
- (void)autoClean;
- (BOOL)shouldReport:(unsigned long long)a0;
- (void)logSavedDiagnostic:(unsigned long long)a0;
- (void)logUploadingDiagnostic:(unsigned long long)a0;
- (void)logUploadedDiagnostic:(unsigned long long)a0;
- (id)getDiagnosticDirectory;
- (id)generateFilePathWithType:(unsigned long long)a0 ReportID:(id)a1;
- (unsigned long long)getDumpType:(id)a0;
- (id)getFileName:(id)a0;
- (int)enumerate:(id)a0;
- (int)recursivelyEnumerateStackFrame:(id)a0;
- (void).cxx_destruct;

@end

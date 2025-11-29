@class NSArray, NSString, HMInstance, NSObject;
@protocol OS_dispatch_queue;

@interface HMDAppExitReasonTracker : HMDTracker <HMDExceptionReporterDataProvider, HMDAPPExitReasonDetectorProtocol>

@property (retain, nonatomic) NSArray *andConditions;
@property (retain, nonatomic) HMInstance *instance;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadAppExitQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)didDetectExitReason:(int)a0 desc:(id)a1 info:(id)a2;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (id)getAppExitReasonDataWithRecords:(id)a0;
- (void)startTracker:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)exceptionType;
- (id)moduleName;
- (id)tableName;
- (Class)storeClass;

@end

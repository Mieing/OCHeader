@class NSString, NSDictionary, NSArray, HMInstance, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDFDTracker : HMDTracker <HMDExceptionReporterDataProvider>

@property (retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSDictionary *fds;
@property (retain, nonatomic) NSString *homePath;
@property (retain, nonatomic) NSMutableArray *backtraces;
@property (nonatomic) int maxFD;
@property (retain, nonatomic) NSString *errType;
@property (retain, nonatomic) NSArray *andConditions;
@property (retain, nonatomic) HMInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (BOOL)exceptionDataSource;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (id)getPathInfoForFD:(int)a0 withType:(id)a1;
- (id)getFIFOInfoForFD:(int)a0 withInode:(unsigned long long)a1;
- (id)getScoketInfoForFD:(int)a0;
- (void)reporterFDExceptionData;
- (void)recodeWarnFDBacktrace:(int)a0 withErr:(int)a1;
- (void)recodeFileDescriptors;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (unsigned long long)exceptionType;
- (void)start;
- (Class)storeClass;

@end

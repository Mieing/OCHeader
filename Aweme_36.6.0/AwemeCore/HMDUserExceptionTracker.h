@class NSArray, NSDictionary, NSString, HMInstance, HMDThreadSafeDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDUserExceptionTracker : HMDTracker <HMDExceptionReporterDataProvider> {
    NSArray *_andConditions;
    HMDThreadSafeDictionary *_timestampMap;
    NSObject<OS_dispatch_queue> *_userExceptionQueue;
}

@property (nonatomic) unsigned long long maxUploadCount;
@property (retain) NSDictionary *typeBlockList;
@property (retain, nonatomic) NSArray *typeAllowList;
@property (nonatomic) BOOL addNetScheduleNoti;
@property (retain, nonatomic) HMInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (BOOL)needSyncStart;
- (BOOL)exceptionDataSource;
- (long long)dbMaxSize;
- (void)trackAllThreadsLogExceptionType:(id)a0 skippedDepth:(unsigned long long)a1 customParams:(id)a2 filters:(id)a3 callback:(id /* block */)a4;
- (void)trackUserExceptionWithExceptionType:(id)a0 title:(id)a1 subTitle:(id)a2 customParams:(id)a3 filters:(id)a4 callback:(id /* block */)a5;
- (id)getBacktracesWithKeyThread:(unsigned int)a0 skippedDepth:(unsigned long long)a1 needAllThreads:(BOOL)a2;
- (void)trackUserExceptionWithType:(id)a0 backtracesArray:(id)a1 customParams:(id)a2 filters:(id)a3 callback:(id /* block */)a4;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (void)cleanupExceptionDataWithConfig:(id)a0;
- (id)pendingDebugRealExceptionDataWithConfig:(id)a0;
- (void)dropExceptionDataIgnoreHermas;
- (void)trackThreadLogWithBacktraceParameter:(id)a0 callback:(id /* block */)a1;
- (id)dealNotDebugRealPerformanceData;
- (id)getBacktracesWithParameter:(id)a0;
- (void)trackBaseExceptionWithBacktraceParameter:(id)a0 callback:(id /* block */)a1;
- (void)trackThreadLogWithParameter:(id)a0 callback:(id /* block */)a1;
- (id)checkIfAvailableForType:(id)a0 appID:(id)a1;
- (BOOL)checkException:(id)a0 appID:(id)a1 callback:(id /* block */)a2;
- (void)didCollectOneExceptionRecordIfAvailable:(id)a0 log:(id)a1 title:(id)a2 subTitle:(id)a3 symbol:(BOOL)a4 addressList:(id)a5 filters:(id)a6 customParams:(id)a7 viewHierarchy:(id)a8 asyncTimes:(int)a9 aggregationKey:(id)a10 appID:(id)a11 callback:(id /* block */)a12;
- (BOOL)checkException:(id)a0 callback:(id /* block */)a1;
- (void)didCollectOneExceptionRecordIfAvailable:(id)a0 log:(id)a1 title:(id)a2 subTitle:(id)a3 symbol:(BOOL)a4 addressList:(id)a5 filters:(id)a6 customParams:(id)a7 viewHierarchy:(id)a8 asyncTimes:(int)a9 aggregationKey:(id)a10 callback:(id /* block */)a11;
- (void)_internalTrackExceptionWithType:(id)a0 skippedDepth:(unsigned long long)a1 keyThread:(unsigned int)a2 needAllThreads:(BOOL)a3 customParams:(id)a4 filters:(id)a5 callback:(id /* block */)a6;
- (void)trackUserExceptionWithExceptionType:(id)a0 title:(id)a1 subTitle:(id)a2 addressList:(id)a3 customParams:(id)a4 filters:(id)a5 callback:(id /* block */)a6;
- (void)trackUserExceptionWithExceptionType:(id)a0 title:(id)a1 subTitle:(id)a2 addressList:(id)a3 needBinaryInfo:(BOOL)a4 customParams:(id)a5 filters:(id)a6 callback:(id /* block */)a7;
- (void)uploadUserExceptionLogIfNeeded;
- (void)recieveNetworkScheduleNotification:(id)a0;
- (id)getUserExceptionDataWithRecords:(id)a0;
- (id)checkIfAvailableForType:(id)a0;
- (void)trackThreadLogWithNSExceptionParameter:(id)a0 callback:(id /* block */)a1;
- (void)trackAllThreadsLogExceptionType:(id)a0 keyThread:(unsigned int)a1 skippedDepth:(unsigned long long)a2 customParams:(id)a3 filters:(id)a4 callback:(id /* block */)a5;
- (void)trackCurrentThreadLogExceptionType:(id)a0 skippedDepth:(unsigned long long)a1 customParams:(id)a2 filters:(id)a3 callback:(id /* block */)a4;
- (void)trackMainThreadLogExceptionType:(id)a0 skippedDepth:(unsigned long long)a1 customParams:(id)a2 filters:(id)a3 callback:(id /* block */)a4;
- (void)trackThreadLogExceptionType:(id)a0 thread:(unsigned int)a1 skippedDepth:(unsigned long long)a2 customParams:(id)a3 filters:(id)a4 callback:(id /* block */)a5;
- (id)getUserExceptionLogWithType:(id)a0 skippedDepth:(unsigned long long)a1 keyThread:(unsigned int)a2 needAllThreads:(BOOL)a3 callback:(id /* block */)a4;
- (void)trackUserExceptionWithType:(id)a0 Log:(id)a1 CustomParams:(id)a2 filters:(id)a3 callback:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)exceptionType;
- (void)start;
- (void)dealloc;
- (Class)storeClass;

@end

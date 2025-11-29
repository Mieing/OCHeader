@class NSArray, HMInstance, NSString;

@interface HMDUIFrozenTracker : HMDTracker <HMDUIFrozenDetectProtocol, HMDExcludeModule>

@property (retain, nonatomic) NSArray *andConditions;
@property (getter=isFinishDetection) BOOL finishDetection;
@property (getter=isDetected) BOOL detected;
@property (retain, nonatomic) HMInstance *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)excludedModule;
+ (id)reportDataForRecords:(id)a0;
+ (id)aggregateDataForRecords:(id)a0;
+ (id)sharedTracker;

- (void)updateConfig:(id)a0;
- (void)runTaskIndependentOfStart;
- (void)checkOpenStatus:(int)a0 invalidStop:(BOOL)a1;
- (BOOL)needSyncStart;
- (BOOL)performanceDataSource;
- (BOOL)exceptionDataSource;
- (void)cleanupWithConfig:(id)a0;
- (id)finishDetectionNotification;
- (id)pendingExceptionData;
- (void)exceptionReporterDidReceiveResponse:(BOOL)a0;
- (void)dropExceptionData;
- (id)binaryInfoFromLastTimeBinaryImageSet;
- (void)didDetectUIFrozenWithData:(id)a0;
- (id)convertPointToString:(id)a0;
- (id)convertDictionariesToString:(id)a0;
- (id)getUIFrozenDataWithRecords:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (unsigned long long)exceptionType;
- (void)start;
- (id)tableName;
- (Class)storeClass;

@end

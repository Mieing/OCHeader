@class NSString;

@interface HMDInspector : NSObject <HeimdallrLocalModule> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _DBInspect_mutex;
    BOOL _isDBInspect_inProgress;
    _Atomic unsigned int _DBDevastedCount;
}

@property BOOL isRunning;
@property (nonatomic) BOOL isDBHandling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)expectedDatabaseSize;
+ (unsigned long long)resolveDevastedSizeByExpectedSize:(unsigned long long)a0;
+ (double)cleanupPercentageWithDatabaseSize:(double)a0 expectedSize:(double)a1 devastedSize:(double)a2;
+ (id)allPossibleTableAndModulePairs;
+ (id)defaultAdditonalTableName;
+ (id)combineTables:(id)a0 withTable:(id)a1;
+ (id)defaultTableCleanupWeightOverride;
+ (id)defaultCleanupWeightForTableName:(id)a0;
+ (id)sharedInstance;
+ (id)getInstance;

- (void)startDatabaseInspectation;
- (void)stopDatabaseInspectation;
- (void)enterBackgroundForTask:(id)a0;
- (void)handleDatabaseInspectation;
- (void)handleCleanUploadRecordWithDBSize:(unsigned long long)a0;
- (BOOL)shouldPerformDevastedCleanup;
- (void)databaseCleanupByDevastation;
- (void)databaseCleanupByGranularity:(double)a0;
- (BOOL)dbVaccumIfEnvironmentAvailable;
- (BOOL)currentDatabaseTable:(id *)a0 count:(id *)a1 cleanupWeight:(id *)a2;
- (id)cleanupWeightWithTableNameAndClassPairs:(id)a0 additionalTableNames:(id)a1;
- (id)recordCountsWithTableNames:(id)a0;
- (long long)recordCountForTableName:(id)a0;
- (id)initSharedInspector;
- (id)init;
- (void)stop;
- (void)start;
- (id)moduleName;
- (void)dealloc;
- (unsigned long long)databaseSize;

@end

@class NSString, NSMutableArray, NSArray;

@interface HMDBaseModule : NSObject <HMDMigrateProtocol>

@property (readonly, nonatomic) NSString *migrateBeginTimeKey;
@property (retain, nonatomic) NSMutableArray *operationRecords;
@property (retain, nonatomic) NSArray *debugRealCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)__testIfMigrationNeeded;
+ (void)cleanMigrateIndicator;
+ (void)cleanDatabaseIfNeeded;

- (void)__reportHeimdallrNeedUploadedDataOnQueue;
- (void)__uploadData:(id)a0 completion:(id /* block */)a1;
- (void)__removeHeimdallrExpiredData;
- (id)conditionArrayWithTableName:(id)a0;
- (BOOL)shouldCareEnableUpload:(id)a0;
- (void)migrateForward;
- (void)continueReportNeedUploadedData;
- (id)fetchDataFromDatabase;
- (void)dataDidReportSuccess:(BOOL)a0;
- (void)configMigrateRequestModel:(id)a0 withConfig:(id)a1;
- (id)dataBaseTableMap;
- (void).cxx_destruct;
- (id)init;

@end

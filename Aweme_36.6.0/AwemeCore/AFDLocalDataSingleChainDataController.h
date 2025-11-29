@class NSString, NSArray, NSDictionary, NSMutableDictionary, NSTimer, NSMutableArray;

@interface AFDLocalDataSingleChainDataController : NSObject <AFDLocalDataFetcher>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSArray *tableArray;
@property (retain, nonatomic) NSDictionary *reportConfigDictionary;
@property (retain, nonatomic) NSMutableDictionary *deleteConfigDictionary;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableArray *synchronizingTables;
@property (copy, nonatomic) id /* block */ fetchPlanBlock;
@property (copy, nonatomic) id /* block */ reportBlock;
@property (copy, nonatomic) NSArray *allTableArray;
@property (nonatomic) BOOL isRequestOnAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearAllTableMetaWithUserID:(id)a0;
+ (void)clearTableMetaWithUserID:(id)a0 tableName:(id)a1;
+ (id)keyForLoginUser:(id)a0 key:(id)a1;
+ (BOOL)enableFixSyncIssue;

- (void)onTimer:(id)a0;
- (void)fetchMultiTableCompensateDataWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)disableTimer;
- (void)fetchCompensateDataWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (double)minReportIntervalSetting;
- (id)initWithUserID:(id)a0 tableArray:(id)a1;
- (void)loadMoreWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)reportDataWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)updateTableMeta:(id)a0 tableName:(id)a1;
- (void)initFetchWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)fetchCompensateDataWithTable:(id)a0 primaryIDs:(id)a1 queryParam:(id)a2 completion:(id /* block */)a3;
- (BOOL)reportTimeIsValidWithTableName:(id)a0 currentDate:(id)a1;
- (void)refreshDatasFromStorage;
- (void)metaKeyChangedNotification:(id)a0;
- (void)updateReportConfig:(id)a0 tableName:(id)a1 needStore:(BOOL)a2;
- (void)syncDataWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)trackNetReportWithType:(id)a0 isFullSync:(BOOL)a1 tableNames:(id)a2 error:(id)a3 startTime:(double)a4;
- (void)fetchUpdatePlanWithTableNames:(id)a0 queryParam:(id)a1 completion:(id /* block */)a2;
- (void)reportStatusWithTableName:(id)a0 success:(BOOL)a1;
- (void)reportDataWithTable:(id)a0 modelsArray:(id)a1 queryParam:(id)a2 completion:(id /* block */)a3;
- (id)tableMetaWithName:(id)a0;
- (void)updateReportConfigs:(id)a0;
- (void)syncTableDataWithTableName:(id)a0 requestModel:(id)a1 completion:(id /* block */)a2;
- (void)updateDeleteConfigWithTableName:(id)a0 needReset:(BOOL)a1;
- (id)tableMetaStorageKeyWithName:(id)a0;
- (void)updateReportTimer;
- (void).cxx_destruct;

@end

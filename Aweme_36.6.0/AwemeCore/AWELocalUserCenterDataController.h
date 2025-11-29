@class NSArray, NSDictionary, NSMutableDictionary, NSTimer;

@interface AWELocalUserCenterDataController : AWEListDataController

@property (copy, nonatomic) NSArray *tableConfigs;
@property (retain, nonatomic) NSDictionary *reportConfigDictionary;
@property (retain, nonatomic) NSMutableDictionary *deleteConfigDictionary;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ reportBlock;

+ (void)clearTableMeta:(id)a0;

- (void)onTimer:(id)a0;
- (void)disableTimer;
- (double)minReportIntervalSetting;
- (void)updateTableMeta:(id)a0 tableName:(id)a1;
- (BOOL)reportTimeIsValidWithTableName:(id)a0 currentDate:(id)a1;
- (void)refreshDatasFromStorage;
- (void)metaKeyChangedNotification:(id)a0;
- (void)updateReportConfig:(id)a0 tableName:(id)a1 needStore:(BOOL)a2;
- (void)reportStatusWithTableName:(id)a0 success:(BOOL)a1;
- (id)tableMetaWithName:(id)a0;
- (void)updateReportConfigs:(id)a0;
- (void)updateDeleteConfigWithTableName:(id)a0 needReset:(BOOL)a1;
- (void)updateReportTimer;
- (void)fetchUpdatePlanWithTables:(id)a0 queryParam:(id)a1 completion:(id /* block */)a2;
- (void)initFetchUserDataWithTableName:(id)a0 source:(long long)a1 queryParam:(id)a2 completion:(id /* block */)a3;
- (void)loadMoreWithTableName:(id)a0 source:(long long)a1 queryParam:(id)a2 pageParamsStr:(id)a3 completion:(id /* block */)a4;
- (void)reportDataWithTableName:(id)a0 models:(id)a1 queryParam:(id)a2 completion:(id /* block */)a3;
- (void)fetchCompensateDataWithTableName:(id)a0 userIDs:(id)a1 queryParam:(id)a2 completion:(id /* block */)a3;
- (void)fetchUserDataWithTableName:(id)a0 source:(long long)a1 queryParam:(id)a2 pageParamsStr:(id)a3 isLoadMore:(BOOL)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)initWithConfigs:(id)a0;

@end

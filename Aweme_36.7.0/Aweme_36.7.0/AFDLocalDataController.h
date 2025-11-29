@class NSObject, NSMutableDictionary, NSDictionary, AFDLocalDataSingleChainDataController, NSMutableArray, AFDLocalDataMultiChainDataController;
@protocol OS_dispatch_queue, AFDLocalDataControllerDelegate;

@interface AFDLocalDataController : NSObject

@property (retain, nonatomic) NSDictionary *tablesDictionary;
@property (retain, nonatomic) AFDLocalDataMultiChainDataController *multiChainDataController;
@property (copy, nonatomic) NSDictionary *multiSyncTableDictionary;
@property (retain, nonatomic) NSMutableDictionary *multiOverwriteDictionary;
@property (retain, nonatomic) NSMutableArray *multiReportTables;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *multiSyncQueue;
@property (retain, nonatomic) AFDLocalDataSingleChainDataController *singleChainDataController;
@property (copy, nonatomic) NSDictionary *singleSyncTableDictionary;
@property (retain, nonatomic) NSMutableDictionary *needDeleteUidDict;
@property (retain, nonatomic) NSMutableDictionary *updateUserDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *singleSyncQueue;
@property (weak, nonatomic) id<AFDLocalDataControllerDelegate> delegate;

+ (BOOL)enableFixThread;
+ (void)clearAllTableMetaWithUserID:(id)a0;

- (id)initWithTablesDictionary:(id)a0;
- (void)fetchDataWithSource:(long long)a0 msgDict:(id)a1;
- (void)disableTimer;
- (void)clearTableMeta:(id)a0;
- (void)reportDataWithRequestModel:(id)a0;
- (void)fetchCompensateDataWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)checkDataWithScene:(id)a0 itemDictionary:(id)a1 paramsModel:(id)a2 completion:(id /* block */)a3;
- (void)updateTablesWithDictionary:(id)a0;
- (void)setupDataControllers;
- (void)fetchDataWithSource:(long long)a0 syncType:(long long)a1 tableDictionary:(id)a2;
- (void)fetchDataWithRequestModel:(id)a0;
- (id)dataControllerWithSyncType:(long long)a0;
- (void)processMultiChainModelsWithResponse:(id)a0 error:(id)a1 requestModel:(id)a2;
- (void)p_fetchDataWithRequestModel:(id)a0;
- (void)processSingleChainModelsWithResponse:(id)a0 source:(long long)a1;
- (void)singleChainTableSyncSuccess:(id)a0 tableMeta:(id)a1;
- (void)loadMoreWithRequestModel:(id)a0;
- (void)updateTableMeta:(id)a0 table:(id)a1;
- (void).cxx_destruct;

@end

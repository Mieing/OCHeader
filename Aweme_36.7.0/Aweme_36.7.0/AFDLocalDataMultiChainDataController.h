@class NSString;

@interface AFDLocalDataMultiChainDataController : NSObject <AFDLocalDataFetcher>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *syncParams;
@property (copy, nonatomic) NSString *reportParams;
@property (nonatomic) long long requestTimes;
@property (nonatomic) BOOL isRequestOnAir;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearStorageParamsWithUserID:(id)a0;
+ (id)keyForLoginUser:(id)a0 userID:(id)a1;
+ (void)checkDataWithScene:(id)a0 modelsArray:(id)a1 completion:(id /* block */)a2;

- (id)initWithUserID:(id)a0;
- (void)fetchCompensateDataWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)loadMoreWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)reportDataWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)updateSyncParams:(id)a0;
- (void)clearStorageParams;
- (void)initFetchWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (id)keyForLoginUser:(id)a0;
- (void)constructResponseWithRequestModel:(id)a0 responseModel:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)syncDataWithSource:(long long)a0 tableNames:(id)a1 isLoadMore:(BOOL)a2 syncParams:(id)a3 completion:(id /* block */)a4;
- (void)fetchCompensateDataWithTable:(id)a0 primaryIDs:(id)a1 queryParam:(id)a2 completion:(id /* block */)a3;
- (void)reportDataWithTable:(id)a0 modelsArray:(id)a1 firstReport:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_syncDataWithSource:(long long)a0 tableNames:(id)a1 isLoadMore:(BOOL)a2 syncParams:(id)a3 completion:(id /* block */)a4;
- (void)trackNetReportWithTableNames:(id)a0 requestType:(id)a1 error:(id)a2 startTime:(double)a3;
- (void)updateReportParams:(id)a0;
- (BOOL)reportTimeIsValidWithTableName:(id)a0 currentDate:(id)a1;
- (void).cxx_destruct;

@end

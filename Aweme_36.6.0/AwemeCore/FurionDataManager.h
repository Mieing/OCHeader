@class FurionDataStash, NSArray, NSDictionary, NSMutableDictionary, NSCache;

@interface FurionDataManager : NSObject

@property (retain, nonatomic) FurionDataStash *dataStash;
@property (retain, nonatomic) NSDictionary *dataSourceNameMap;
@property (retain, nonatomic) NSDictionary *groupName_dataSourceNameMap;
@property (retain, nonatomic) NSArray *dataSources;
@property (retain, nonatomic) NSMutableDictionary *registerInfoMap;
@property (retain, nonatomic) NSMutableDictionary *registerBizInfoMap;
@property (retain, nonatomic) NSCache *factorToDataSourceCache;
@property (nonatomic) BOOL dataSourcesIsReady;

- (id)getFactorsWithQueryGroups:(id)a0 bizInfo:(id)a1 error:(id *)a2;
- (void)startSession:(id)a0 factorName:(id)a1 dataSource:(id)a2;
- (void)endSession:(id)a0 factorName:(id)a1 dataSource:(id)a2;
- (void)registerFactorGroup:(id)a0 bizInfo:(id)a1 callback:(id /* block */)a2;
- (void)registerCombineFactor:(id)a0 bizInfo:(id)a1 callback:(id /* block */)a2;
- (void)addFactorCollectConfigDict:(id)a0;
- (void)addFactorReportConfigDict:(id)a0;
- (void)addFactor:(id)a0 value:(id)a1 group:(id)a2 dataSource:(id)a3;
- (id)getFactorWithKey:(id)a0 extParams:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (id)_getFactorsInStashWithQueryGroups:(id)a0 bizInfo:(id)a1 error:(id *)a2;
- (id)getDataSourceWithGroupName:(id)a0;
- (id)getFactorsWithConfigDict:(id)a0 extParams:(id)a1 bizInfo:(id)a2 error:(id *)a3;
- (void)addAppSessionFactorConfigDict:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

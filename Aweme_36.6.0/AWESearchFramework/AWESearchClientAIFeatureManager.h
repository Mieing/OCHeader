@class NSString, NSDictionary;

@interface AWESearchClientAIFeatureManager : NSObject

@property (copy, nonatomic) NSString *currentSearchID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *queryInfo;
@property (nonatomic) unsigned long long searchTime;
@property (nonatomic) unsigned long long page;
@property (nonatomic) unsigned long long columnType;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *fromGid;

+ (BOOL)videoSearchEnable;

- (void)updateEnterFrom:(id)a0;
- (void)updateSource:(id)a0;
- (void)updatePage:(long long)a0;
- (void)updateSearchTime:(double)a0;
- (void)updateSearchID:(id)a0;
- (void)updateChannel:(id)a0;
- (void)updateFromGid:(id)a0;
- (void)updateColumnType:(long long)a0;
- (void)updateQueryInfo:(id)a0;
- (void)triggerGeneralSearchCommonFeatureCollectWithType:(unsigned long long)a0 models:(id)a1 completion:(id /* block */)a2;
- (id)taskParamsWithModels:(id)a0;
- (id)baseTaskParams;
- (id)videoSearchTaskParamsWithModels:(id)a0;
- (void)triggerVideoSearchCommonFeatureCollectWithType:(unsigned long long)a0 models:(id)a1 completion:(id /* block */)a2;
- (void)triggerScanSearchCommonFeatureCollectWithType:(unsigned long long)a0 models:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

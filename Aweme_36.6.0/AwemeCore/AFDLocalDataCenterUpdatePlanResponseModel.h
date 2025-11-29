@class NSArray, NSDictionary;

@interface AFDLocalDataCenterUpdatePlanResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tableNames;
@property (retain, nonatomic) NSDictionary *tableMetas;
@property (retain, nonatomic) NSArray *reportConfigs;
@property (retain, nonatomic) NSArray *fullSyncTableNames;

+ (id)reportConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

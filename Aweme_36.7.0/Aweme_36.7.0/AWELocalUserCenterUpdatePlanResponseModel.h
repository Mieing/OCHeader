@class NSArray, NSDictionary;

@interface AWELocalUserCenterUpdatePlanResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *tableNames;
@property (retain, nonatomic) NSDictionary *tableMetas;
@property (retain, nonatomic) NSArray *reportConfigs;

+ (id)reportConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

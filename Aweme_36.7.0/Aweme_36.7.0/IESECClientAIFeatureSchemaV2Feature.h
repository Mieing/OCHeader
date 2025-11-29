@class NSString, NSDictionary;

@interface IESECClientAIFeatureSchemaV2Feature : NSObject

@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSString *businessName;
@property (retain, nonatomic) NSDictionary *queryContext;

- (id)initWithFeatureName:(id)a0 businessName:(id)a1 queryContext:(id)a2;
- (void).cxx_destruct;

@end

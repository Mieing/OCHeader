@class NSString, NSDictionary, SECRouteTrafficResult, NSArray, NSError;

@interface SECRoutePolicyResult : NSObject

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) double policyCost;
@property (copy, nonatomic) NSDictionary *detailMetrics;
@property (copy, nonatomic) NSString *policyName;
@property (copy, nonatomic) NSString *policyAction;
@property (retain, nonatomic) SECRouteTrafficResult *actionResult;
@property (nonatomic) long long riskLevel;
@property (copy, nonatomic) NSArray *sceneResultList;
@property (copy, nonatomic) NSArray *pickedParams;
@property (retain, nonatomic) NSError *policyError;
@property (retain, nonatomic) SECRoutePolicyResult *erroredResult;

- (void)recordStart;
- (void)recordEnd;
- (void)updateMetrics:(id)a0;
- (void).cxx_destruct;
- (id)allMetrics;

@end

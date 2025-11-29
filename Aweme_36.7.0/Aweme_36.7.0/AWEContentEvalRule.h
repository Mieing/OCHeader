@class NSString, NSArray, NSDictionary;

@interface AWEContentEvalRule : NSObject

@property (copy, nonatomic) NSString *ruleExpression;
@property (copy, nonatomic) NSArray *factors;
@property (copy, nonatomic) NSDictionary *factorWeightMap;

+ (id)createWithConfig:(id)a0;

- (id)evaluateContentWithAwemeID:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end

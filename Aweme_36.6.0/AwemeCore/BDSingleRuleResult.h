@class NSDictionary, NSString;

@interface BDSingleRuleResult : NSObject

@property (copy, nonatomic) NSDictionary *conf;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *key;

- (id)jsonFormat;
- (void).cxx_destruct;
- (id)description;

@end

@class NSDictionary, NSString, NSArray;

@interface TMPrivacyStrategyModel : NSObject

@property (copy, nonatomic) NSDictionary *input;
@property (copy, nonatomic) NSDictionary *usedStateParams;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSArray *strategies;
@property (copy, nonatomic) NSArray *hitRules;

- (id)jsonDict;
- (void).cxx_destruct;

@end

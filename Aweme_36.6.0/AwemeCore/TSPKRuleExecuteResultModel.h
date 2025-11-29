@class NSDictionary, NSString, NSArray;

@interface TSPKRuleExecuteResultModel : NSObject

@property (copy, nonatomic) NSDictionary *input;
@property (copy, nonatomic) NSDictionary *usedStateParams;
@property (copy, nonatomic) NSString *strategyMD5;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSArray *strategies;
@property (copy, nonatomic) NSArray *hitRules;
@property (readonly, nonatomic) BOOL isCompliant;

- (void).cxx_destruct;

@end

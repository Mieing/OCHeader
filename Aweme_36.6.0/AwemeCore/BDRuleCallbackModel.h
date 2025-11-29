@class BDRuleModel, NSDictionary;

@interface BDRuleCallbackModel : NSObject

@property (retain, nonatomic) BDRuleModel *rule;
@property (retain, nonatomic) NSDictionary *context;

- (id)initWithRule:(id)a0 context:(id)a1;
- (void)didFinishExecuteWithResult:(id)a0;
- (void).cxx_destruct;

@end

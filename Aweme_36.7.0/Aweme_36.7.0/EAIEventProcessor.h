@class NSDictionary;

@interface EAIEventProcessor : NSObject

@property (retain, nonatomic) NSDictionary *paramsRules;

+ (id)create:(id)a0;

- (id)process:(id)a0 params:(id)a1 values:(id)a2;
- (id)initWithParamsRules:(id)a0;
- (void).cxx_destruct;

@end

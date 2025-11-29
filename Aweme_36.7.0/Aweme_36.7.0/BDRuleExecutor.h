@class NSString, NSMutableArray, BDRuleParameterFetcher;

@interface BDRuleExecutor : NSObject

@property (retain, nonatomic) BDRuleParameterFetcher *fetcher;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSMutableArray *callBackModels;

- (id)__evaluateRules:(id)a0 execAllRules:(BOOL)a1;
- (id)__evaluateRule:(id)a0;
- (id)executeRule:(id)a0;
- (id)executeRule:(id)a0 execAllRules:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;

@end

@class NSMutableDictionary;

@interface AWEKnowledgeStateRuleManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *tokenDic;

+ (id)sharedManager;

- (void)executeExpStr:(id)a0 withDataProvider:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

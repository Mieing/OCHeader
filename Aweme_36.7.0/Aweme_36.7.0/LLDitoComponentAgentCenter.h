@class NSDictionary, LLDitoPageContext;

@interface LLDitoComponentAgentCenter : NSObject

@property (copy, nonatomic) NSDictionary *agentMap;
@property (weak, nonatomic) LLDitoPageContext *context;

- (id)buildComponentViewModelWithNode:(id)a0;
- (BOOL)registerAgent:(id)a0 withKey:(id)a1;
- (void)registerDefaultAgents;
- (id)componentAgentWithKey:(id)a0;
- (id)componentViewWithKey:(id)a0 componentViewModel:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

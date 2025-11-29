@class NSMutableDictionary;

@interface SECDecisionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *bindedDecisions;
@property (retain, nonatomic) NSMutableDictionary *registerDecisions;

+ (id)sharedManager;

- (void)addDecisionClass:(Class)a0 forProtocol:(id)a1 withName:(id)a2;
- (void)bindDecision:(Class)a0 forProtocol:(id)a1;
- (Class)findDecisionForProtocol:(id)a0;
- (Class)decisionForProtocol:(id)a0 withName:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

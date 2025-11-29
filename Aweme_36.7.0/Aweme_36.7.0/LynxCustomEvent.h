@class NSMutableDictionary;

@interface LynxCustomEvent : LynxEvent

@property (retain, nonatomic) NSMutableDictionary *params;

- (id)initWithName:(id)a0 targetSign:(long long)a1 params:(id)a2;
- (id)paramsName;
- (id)initWithName:(id)a0 targetSign:(long long)a1;
- (id)generateEventBody;
- (id)initWithName:(id)a0 targetSign:(long long)a1 currentTargetSign:(long long)a2 params:(id)a3;
- (void)addDetailKey:(id)a0 value:(id)a1;
- (void).cxx_destruct;
- (id)description;

@end

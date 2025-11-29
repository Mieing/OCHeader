@class BDREOperatorManager, BDREFuncManager, BDREExprCacheManager;

@interface BDREExprRunner : NSObject

@property (retain, nonatomic) BDREFuncManager *funcManager;
@property (retain, nonatomic) BDREOperatorManager *operatorManager;
@property (retain, nonatomic) BDREExprCacheManager *cacheManager;

+ (id)sharedRunner;

- (id)execute:(id)a0 withEnv:(id)a1;
- (id)execute:(id)a0 preCommands:(id)a1 withEnv:(id)a2 uuid:(id)a3;
- (id)commandsFromExpr:(id)a0;
- (id)initWithShared;
- (id)execute:(id)a0 withEnv:(id)a1 uuid:(id)a2;
- (void)logExecuteExprWithResponse:(id)a0 expr:(id)a1 uuid:(id)a2;
- (void)logErrorEventWithCode:(long long)a0 cel:(id)a1 message:(id)a2;
- (void)logEventWithResponse:(id)a0 expr:(id)a1 uuid:(id)a2;
- (void)registerFunc:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerOperator:(id)a0;

@end

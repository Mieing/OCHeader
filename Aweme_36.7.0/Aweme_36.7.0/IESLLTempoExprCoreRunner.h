@class IESLLTempoExprCoreOperatorManager, IESLLTempoExprCoreParser, YYMemoryCache, IESLLTempoExprCoreFuncManager;

@interface IESLLTempoExprCoreRunner : NSObject

@property (retain, nonatomic) IESLLTempoExprCoreFuncManager *funcManager;
@property (retain, nonatomic) IESLLTempoExprCoreOperatorManager *operatorManager;
@property (retain, nonatomic) IESLLTempoExprCoreParser *parser;
@property (retain, nonatomic) YYMemoryCache *cache;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (nonatomic) BOOL enableRWLock;

+ (void)initialize;

- (id)execute:(id)a0 withEnv:(id)a1;
- (void)registerFunc:(id)a0;
- (BOOL)parseExpr:(id)a0;
- (void)cleanupParseResultCache;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)registerOperator:(id)a0;

@end

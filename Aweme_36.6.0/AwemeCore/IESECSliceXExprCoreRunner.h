@class YYMemoryCache, IESECSliceXExprCoreOperatorManager, IESECSliceXExprCoreParser, IESECSliceXExprCoreFuncManager;

@interface IESECSliceXExprCoreRunner : NSObject

@property (retain, nonatomic) IESECSliceXExprCoreFuncManager *funcManager;
@property (retain, nonatomic) IESECSliceXExprCoreOperatorManager *operatorManager;
@property (retain, nonatomic) IESECSliceXExprCoreParser *parser;
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

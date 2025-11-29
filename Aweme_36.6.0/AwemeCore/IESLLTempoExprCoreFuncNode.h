@class IESLLTempoExprCoreFunc;

@interface IESLLTempoExprCoreFuncNode : IESLLTempoExprCoreBaseNode

@property (readonly, nonatomic) BOOL isOptionFunc;
@property (readonly, nonatomic) IESLLTempoExprCoreFunc *func;

- (id)initWithFunc:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;

@end

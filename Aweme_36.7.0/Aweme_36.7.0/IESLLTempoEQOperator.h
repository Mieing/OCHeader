@interface IESLLTempoEQOperator : IESLLTempoExprCoreBinaryOperator

- (id)symbol;
- (unsigned long long)priority;
- (id)execute:(id)a0 error:(id *)a1;

@end

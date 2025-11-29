@class NSMutableDictionary;

@interface IESLLTempoExprCoreOperatorManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *unaryOperators;
@property (retain, nonatomic) NSMutableDictionary *binaryOperators;

- (id)getUnaryOperatorFromSymbol:(id)a0;
- (id)getBinaryOperatorFromSymbol:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerOperator:(id)a0;

@end

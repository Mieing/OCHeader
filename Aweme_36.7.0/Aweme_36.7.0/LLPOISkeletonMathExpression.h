@class LLDitoMathExpression;

@interface LLPOISkeletonMathExpression : LLPOISkeletonExpression

@property (retain, nonatomic) LLDitoMathExpression *ditoExpression;

- (id)calculateWithViewModel:(id)a0;
- (id)mathReservedDictWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;

@end

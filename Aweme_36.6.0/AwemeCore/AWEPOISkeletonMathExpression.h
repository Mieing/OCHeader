@class DitoMathExpression;

@interface AWEPOISkeletonMathExpression : AWEPOISkeletonExpression

@property (retain, nonatomic) DitoMathExpression *ditoExpression;

- (id)calculateWithViewModel:(id)a0;
- (id)mathReservedDictWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;

@end

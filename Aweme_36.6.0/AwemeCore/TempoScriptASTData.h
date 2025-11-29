@interface TempoScriptASTData : NSObject

@property (retain, nonatomic) id value;
@property (nonatomic) BOOL returnFromOptionalChaining;
@property (nonatomic) long long assignType;
@property (retain, nonatomic) id assignValue;
@property (nonatomic) long long type;

+ (long long)resolveType:(id)a0;
+ (unsigned long long)getOCType:(id)a0;
+ (long long)compareSameTypeWithLeftValue:(id)a0 rightValue:(id)a1;

- (id)valueToNumber:(id)a0;
- (id)add:(id)a0 saveTo:(id)a1;
- (id)calcArithmeticalOperator:(int)a0 withData:(id)a1 saveTo:(id)a2;
- (id)calcRelationalOperator:(int)a0 withData:(id)a1 saveTo:(id)a2;
- (id)calcLogicalOperator:(int)a0 withData:(id)a1 saveTo:(id)a2;
- (id)calcBinaryOperator:(int)a0 withData:(id)a1 saveTo:(id)a2;
- (id)calcUnaryOperator:(int)a0 saveTo:(id)a1;
- (void)setASTValueAndResolveType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

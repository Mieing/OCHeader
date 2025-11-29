@class IESECSliceXExprCoreWordParser;

@interface IESECSliceXExprCoreParser : NSObject

@property (retain, nonatomic) IESECSliceXExprCoreWordParser *wordParser;

+ (void)initialize;

- (id)initWithFuncManager:(id)a0 operatorManager:(id)a1;
- (id)parseExprWithAutoreleasepool:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)parse:(id)a0 error:(id *)a1;

@end

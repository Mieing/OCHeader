@class IESLLTempoExprCoreWordParser;

@interface IESLLTempoExprCoreParser : NSObject

@property (retain, nonatomic) IESLLTempoExprCoreWordParser *wordParser;

- (id)initWithFuncManager:(id)a0 operatorManager:(id)a1;
- (void).cxx_destruct;
- (id)parse:(id)a0 error:(id *)a1;

@end

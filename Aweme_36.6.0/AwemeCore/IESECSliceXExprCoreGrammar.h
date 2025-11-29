@interface IESECSliceXExprCoreGrammar : NSObject

+ (BOOL)isGrammarValid:(id)a0 previousNode:(id)a1 nextNode:(id)a2;
+ (void)initialize;
+ (id)parse:(id)a0 error:(id *)a1;

@end

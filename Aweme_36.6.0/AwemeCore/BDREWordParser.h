@interface BDREWordParser : NSObject

+ (id)splitWord:(id)a0 error:(id *)a1;
+ (id)parseWordToNode:(id)a0 error:(id *)a1 withFuncManager:(id)a2 operatorManager:(id)a3;
+ (BOOL)checkStringIsNumber:(id)a0;
+ (id)splitWords;

@end

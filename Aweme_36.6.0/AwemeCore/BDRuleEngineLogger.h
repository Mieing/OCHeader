@interface BDRuleEngineLogger : NSObject

+ (BOOL)shouldLogWithLevel:(unsigned long long)a0 block:(id /* block */)a1;
+ (void)error:(id /* block */)a0;
+ (void)debug:(id /* block */)a0;
+ (void)info:(id /* block */)a0;
+ (void)warn:(id /* block */)a0;

@end

@interface BDECPigeonDuplicateMethodChecker : NSObject

+ (BOOL)isClassName:(id)a0 hasPrefixList:(id)a1;
+ (id)getDuplicateMethodNameListWithClass:(Class)a0;
+ (void)checkWithClassPrefixList:(id)a0;

@end

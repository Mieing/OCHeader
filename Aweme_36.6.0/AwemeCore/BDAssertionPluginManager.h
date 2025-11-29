@interface BDAssertionPluginManager : NSObject

+ (void)handleFailureWithDesc:(id)a0;
+ (void)handleDebugFailureWithDesc:(id)a0;
+ (void)initialize;
+ (void)removePlugin:(Class)a0;
+ (void)addPlugin:(Class)a0;

@end

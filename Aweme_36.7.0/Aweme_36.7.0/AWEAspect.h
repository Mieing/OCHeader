@interface AWEAspect : NSObject

+ (void)swizzleInstanceMethod:(SEL)a0 inClass:(Class)a1 inModule:(id)a2 newImpFactory:(id /* block */)a3;
+ (void)swizzleInstanceSpecialMethod:(SEL)a0 withNewSelector:(SEL)a1 inClass:(Class)a2 inModule:(id)a3;
+ (void)swizzleClassMethod:(SEL)a0 inClass:(Class)a1 inModule:(id)a2 newImpFactory:(id /* block */)a3;
+ (void)swizzleClassSpecialMethod:(SEL)a0 withNewSelector:(SEL)a1 inClass:(Class)a2 inModule:(id)a3;
+ (void)setHookBlockList:(id)a0;
+ (void)setLogCallback:(void /* function */ *)a0 fileLog:(void /* function */ *)a1 assertLog:(void /* function */ *)a2;

@end

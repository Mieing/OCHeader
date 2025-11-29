@interface FBSDKSwizzler : NSObject

+ (void)initialize;
+ (void)resolveConflict;
+ (void)printSwizzles;
+ (id)swizzleForMethod:(struct objc_method { } *)a0;
+ (void)removeSwizzleForMethod:(struct objc_method { } *)a0;
+ (void)setSwizzle:(id)a0 forMethod:(struct objc_method { } *)a1;
+ (BOOL)isLocallyDefinedMethod:(struct objc_method { } *)a0 onClass:(Class)a1;
+ (void)swizzleSelector:(SEL)a0 onClass:(Class)a1 withBlock:(id /* block */)a2 named:(id)a3;
+ (void)unswizzleSelector:(SEL)a0 onClass:(Class)a1;
+ (void)unswizzleSelector:(SEL)a0 onClass:(Class)a1 named:(id)a2;

@end

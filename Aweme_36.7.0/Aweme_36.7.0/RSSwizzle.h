@interface RSSwizzle : NSObject

+ (BOOL)swizzleInstanceMethod:(SEL)a0 inClass:(Class)a1 newImpFactory:(id /* block */)a2 mode:(unsigned long long)a3 key:(const void *)a4;
+ (void)swizzleClassMethod:(SEL)a0 inClass:(Class)a1 newImpFactory:(id /* block */)a2;

@end

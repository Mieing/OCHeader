@interface HTSAspectCategory : NSObject

+ (id)aspect:(id)a0 select:(SEL)a1 originalFunc:(id /* block */)a2;
+ (void)callbackWith:(id)a0 select:(SEL)a1 ret:(BOOL)a2;
+ (id)aspect:(id)a0 selector:(SEL)a1 originalFunc:(id /* block */)a2;
+ (void)callbackWith:(id)a0 selector:(SEL)a1 ret:(BOOL)a2;

@end

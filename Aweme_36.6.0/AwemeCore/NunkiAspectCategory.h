@interface NunkiAspectCategory : NSObject

+ (id)aspect:(id)a0 selector:(SEL)a1 originalFunc:(id /* block */)a2;
+ (void)callbackWith:(id)a0 selector:(SEL)a1 ret:(BOOL)a2;
+ (id)atomic_aspect:(id)a0 selector:(SEL)a1 originalFunc:(id /* block */)a2;

@end

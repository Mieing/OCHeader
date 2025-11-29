@interface BURuntimeUtil : NSObject

+ (void)exchangeSEL:(SEL)a0 originClass:(Class)a1 targetSEL:(SEL)a2 targetClass:(Class)a3 isClassMethod:(BOOL)a4;
+ (void)exchangeSEL:(SEL)a0 targetSEL:(SEL)a1 aClass:(Class)a2 isClassMethod:(BOOL)a3;
+ (void)bu_exchangeClassSEL:(SEL)a0 originClass:(Class)a1 targetClassSEL:(SEL)a2 targetClass:(Class)a3;
+ (void)bu_exchangeInstanceSEL:(SEL)a0 originClass:(Class)a1 targetInstanceSEL:(SEL)a2 targetClass:(Class)a3;
+ (void)bu_exchangeClassSEL:(SEL)a0 targetClassSEL:(SEL)a1 aClass:(Class)a2;
+ (void)bu_exchangeInstanceSEL:(SEL)a0 targetInstanceSEL:(SEL)a1 aClass:(Class)a2;
+ (BOOL)bu_hasImpletionClass:(Class)a0 sel:(SEL)a1;

@end

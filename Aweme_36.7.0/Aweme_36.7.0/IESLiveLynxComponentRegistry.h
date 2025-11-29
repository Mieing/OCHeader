@interface IESLiveLynxComponentRegistry : NSObject

+ (void)registerUI:(Class)a0 withName:(id)a1;
+ (void)registerShadowNode:(Class)a0 withName:(id)a1;
+ (BOOL)isSubClass:(Class)a0 ofClass:(Class)a1;
+ (void)registerUI:(Class)a0 nameAs:(id)a1;
+ (void)registerNode:(Class)a0 nameAs:(id)a1;
+ (void)LiveLynxComponentInject:(id)a0;

@end

@interface LynxComponentRegistry : NSObject

+ (void)registerUI:(Class)a0 withName:(id)a1;
+ (void)registerShadowNode:(Class)a0 withName:(id)a1;
+ (Class)uiClassWithName:(id)a0 accessible:(BOOL *)a1;
+ (void)registerUI:(Class)a0 nameAs:(id)a1;
+ (void)registerNode:(Class)a0 nameAs:(id)a1;
+ (BOOL)supportNode:(id)a0;
+ (BOOL)supportUI:(id)a0;
+ (Class)shadowNodeClassWithName:(id)a0 accessible:(BOOL *)a1;
+ (id)lynxUIClasses;

@end

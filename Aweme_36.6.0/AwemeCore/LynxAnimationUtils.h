@interface LynxAnimationUtils : NSObject

+ (id)createBasicAnimation:(id)a0 from:(id)a1 to:(id)a2 info:(id)a3;
+ (void)applyAnimationProperties:(id)a0 withInfo:(id)a1 forLayer:(id)a2;
+ (void)removeAnimation:(id)a0 withName:(id)a1;
+ (void)attachTo:(id)a0 animation:(id)a1 forKey:(id)a2;
+ (void)attachOpacityTo:(id)a0 animation:(id)a1 forKey:(id)a2;
+ (void)addContentAnimationDelegateTo:(id)a0 forTargetLayer:(id)a1 withContent:(id)a2 withProp:(unsigned long long)a3;
+ (void)addPathAnimationDelegateTo:(id)a0 forTargetLayer:(id)a1 withPath:(struct CGPath { } *)a2 withProp:(unsigned long long)a3;

@end

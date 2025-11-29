@interface AWEHPCallerUtil : NSObject

+ (id)callerIdForClass:(Class)a0 selector:(SEL)a1;
+ (id)callerIdForClass:(Class)a0 selector:(SEL)a1 name:(id)a2;
+ (id)p_safeStringFromClass:(Class)a0;
+ (id)p_safeStringFromSelector:(SEL)a0;
+ (id)p_safeString:(id)a0;
+ (id)callerIdForClass:(Class)a0 selector:(SEL)a1 index:(long long)a2;
+ (id)callerIdForTransition:(Class)a0 context:(id)a1;
+ (id)callerIdForClassName:(id)a0 funcName:(id)a1;

@end

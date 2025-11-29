@interface AWETabBarTrackUtil : NSObject

+ (id)safeString:(id)a0;
+ (void)logTabBarColorProgress:(double)a0 businessID:(id)a1;
+ (id)businessIDForClass:(Class)a0 selector:(SEL)a1;
+ (id)appendExtraInfo:(id)a0 toBusinessID:(id)a1;
+ (id)safeStringFromClass:(Class)a0;
+ (id)safeStringFromSelector:(SEL)a0;
+ (BOOL)shouldLogTabBarColorProgress:(double)a0 businessID:(id)a1;
+ (BOOL)tabBarColorLogEnabled;
+ (double)tabBarColorLogInterval;
+ (id)businessIDForClass:(Class)a0 selector:(SEL)a1 index:(long long)a2;
+ (id)businessIDForClass:(Class)a0 selector:(SEL)a1 name:(id)a2;
+ (id)businessIDForTransition:(Class)a0 context:(id)a1;
+ (id)businessIDForClassName:(id)a0 funcName:(id)a1;

@end

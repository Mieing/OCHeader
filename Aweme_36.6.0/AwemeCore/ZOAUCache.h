@interface ZOAUCache : NSObject

+ (void)CCAISL:(BOOL)a0;
+ (BOOL)CEC:(id)a0;
+ (id)CG:(id)a0 isLogin:(BOOL)a1 ifGM:(BOOL)a2;
+ (id)generateOneCacheKey:(BOOL)a0 ip:(id)a1 ifGM:(BOOL)a2;
+ (void)keepCache:(id)a0 value:(id)a1 isLogin:(BOOL)a2 key4:(id)a3 iv4:(id)a4 ifGM:(BOOL)a5;
+ (id)makeLoginCacheKeyIsLogin:(BOOL)a0;

@end

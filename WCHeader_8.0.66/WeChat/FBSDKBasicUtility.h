@interface FBSDKBasicUtility : NSObject

+ (id)JSONStringForObject:(id)a0 error:(id *)a1 invalidObjectHandler:(id /* block */)a2;
+ (BOOL)dictionary:(id)a0 setJSONStringForObject:(id)a1 forKey:(id)a2 error:(id *)a3;
+ (id)_convertObjectToJSONObject:(id)a0 invalidObjectHandler:(id /* block */)a1 stop:(BOOL *)a2;
+ (void)dictionary:(id)a0 setObject:(id)a1 forKey:(id)a2;
+ (void)array:(id)a0 addObject:(id)a1;

@end

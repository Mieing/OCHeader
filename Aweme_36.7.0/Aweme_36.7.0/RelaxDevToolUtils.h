@interface RelaxDevToolUtils : NSObject

+ (id)getDevToolEnvInstance;
+ (void)setDevToolEnv:(BOOL)a0 forKey:(id)a1;
+ (BOOL)getDevToolEnv:(id)a0 withDefaultValue:(BOOL)a1;

@end

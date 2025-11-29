@interface LynxDevToolUtils : NSObject

+ (void)setDevtoolEnv:(BOOL)a0 forKey:(id)a1;
+ (BOOL)getDevtoolEnv:(id)a0 withDefaultValue:(BOOL)a1;
+ (void)setDevtoolEnv:(id)a0 forGroup:(id)a1;
+ (id)getDevtoolEnvWithGroupName:(id)a0;

@end

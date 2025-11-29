@interface AWEMainFrameFormatLogger : NSObject

+ (void)logWithLevel:(long long)a0 moduleName:(id)a1 subModuleName:(id)a2 where:(id)a3 what:(id)a4 extra:(id)a5;
+ (BOOL)enableFormatLog;
+ (BOOL)enableMultiInstanceLog;
+ (BOOL)useDefaultWhenDowngrade;
+ (id)instanceName;

@end

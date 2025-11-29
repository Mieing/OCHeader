@interface AWEContentFormatLogger : NSObject

+ (void)logWithLevel:(long long)a0 moduleType:(long long)a1 subModuleType:(long long)a2 where:(id)a3 what:(id)a4 extra:(id)a5;
+ (void)logWithLevel:(long long)a0 useMultiInstance:(BOOL)a1 moduleType:(long long)a2 subModuleType:(long long)a3 where:(id)a4 what:(id)a5 extra:(id)a6;
+ (id)moduleNameWithModuleType:(long long)a0;
+ (id)subModuleNameWithModuleType:(long long)a0;
+ (void)logWithLevel:(long long)a0 useMultiInstance:(BOOL)a1 moduleName:(id)a2 subModuleName:(id)a3 where:(id)a4 what:(id)a5 extra:(id)a6;
+ (void)logWithLevel:(long long)a0 logInstanceName:(id)a1 moduleName:(id)a2 subModuleName:(id)a3 where:(id)a4 what:(id)a5 extra:(id)a6;

@end

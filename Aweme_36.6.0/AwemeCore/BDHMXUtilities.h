@interface BDHMXUtilities : NSObject

+ (BOOL)isReinstall;
+ (long long)appRuntime;
+ (double)systemMemoryUsageRate;
+ (double)virtualMemoryUsageRate;
+ (id)getSchemaBidWithString:(id)a0;
+ (id)localRootPath;
+ (BOOL)getMonitorTagWith:(long long)a0;
+ (BOOL)isEmptyWithString:(id)a0;
+ (BOOL)isEmptyWithDic:(id)a0;
+ (BOOL)isEmptyWithArray:(id)a0;
+ (BOOL)isEmptyWithSet:(id)a0;
+ (id)getPidWithString:(id)a0;
+ (id)getLibraVids;
+ (id)machineModel;
+ (id)modelIdentifier;
+ (BOOL)isiOSAppOnMac;

@end

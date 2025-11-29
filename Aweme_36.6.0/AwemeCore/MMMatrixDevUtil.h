@interface MMMatrixDevUtil : NSObject

+ (id)getSysInfoByName:(char *)a0;
+ (BOOL)isBigScreen;
+ (id)SystemNameForDeviceType;
+ (id)getSysInfoIntByName;
+ (int)getSysInfo:(unsigned int)a0;
+ (id)getDevCategory;
+ (int)cpuFrequency;
+ (int)busFrequency;
+ (int)userMemory;
+ (int)cacheLine;
+ (int)L1ICacheSize;
+ (int)L1DCacheSize;
+ (int)L2CacheSize;
+ (int)L3CacheSize;
+ (id)originArch;
+ (id)model;
+ (id)systemName;
+ (BOOL)isBeingDebugged;
+ (id)systemVersion;
+ (int)memoryCapacity;
+ (id)platform;
+ (int)cpuCount;

@end

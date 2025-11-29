@class NSArray;

@interface SecModuleManager : NSObject

@property (class, retain, nonatomic) NSArray *jailbreakModules;
@property (class, retain, nonatomic) NSArray *suspiciousModules;
@property (class, nonatomic) BOOL isAlreadyGet;

+ (void)doGetSecInfo;
+ (id)getDeviceName;
+ (id)getDeviceModelName;
+ (id)getSystemName;
+ (id)getSystemVersion;
+ (id)jailbreakPaths;
+ (id)suspiciousPathKeywords;
+ (id)getJailbreakSuspiciousModules;
+ (int)getSupiciousModulesBySyscallWithProtection:(char[256] *)a0 maxCount:(int)a1;
+ (id)getSuspiciousProcessModulesByDyld;
+ (long long)compareSystemVersion:(id)a0 withVersion:(id)a1;
+ (id)getSuspiciousProcessModules;
+ (id)getSecExtendInfoWithScene:(id)a0;
+ (id)getSecInfo:(id)a0;
+ (BOOL)isSceneEnable:(id)a0;

@end

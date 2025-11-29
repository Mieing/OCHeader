@interface TSPKUtils : NSObject

+ (id)topViewControllerForController:(id)a0;
+ (void)assert:(BOOL)a0 message:(id)a1;
+ (void)logWithMessage:(id)a0;
+ (double)getRelativeTime;
+ (void)logWithTag:(id)a0 message:(id)a1;
+ (id)concateClassName:(id)a0 method:(id)a1 joiner:(id)a2;
+ (double)getIncrementTime;
+ (id)settingVersion;
+ (id)appStatusWithDefault:(id)a0;
+ (id)concateClassName:(id)a0 method:(id)a1;
+ (double)getUnixTime;
+ (void)exectuteOnMainThread:(id /* block */)a0;
+ (id)topVCName;
+ (id)appStatusString;
+ (id)jsonStringEncodeWithObj:(id)a0;
+ (id)createDefaultInstance:(id)a0 defalutValue:(id)a1;
+ (id)appendUnitName:(id)a0 toRouter:(id)a1;
+ (id)decodeBase64String:(id)a0;
+ (long long)createDefaultValue:(id)a0 defalutValue:(id)a1;
+ (id)fuseError;
+ (long long)appID;
+ (id)version;
+ (id)generateUUID;

@end

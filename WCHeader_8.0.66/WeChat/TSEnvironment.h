@interface TSEnvironment : NSObject

+ (BOOL)isBeingDebugged;
+ (id)loadedImageNames;
+ (int)rootFlag;
+ (id)bundleIdentifier;
+ (int)buildNumber;
+ (void)checkIfWDAIsRunningWithTimeout:(double)a0 completionHandler:(id /* block */)a1;
+ (BOOL)WDAIsRunning;
+ (unsigned long long)chargingState;
+ (id)IDFA;
+ (id)IMEI;
+ (id)vendorIdentifier;
+ (id)model;
+ (float)systemVersion;
+ (id)systemVersionString;
+ (id)bundleAppVersion;
+ (double)systemBootTime;

@end

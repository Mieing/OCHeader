@interface CSJUnionEnvironment : NSObject

+ (id)currentIP;
+ (void)netWorkConnectionChanged:(id)a0;
+ (void)pbu_getPersistenceNetInfo;
+ (void)pbu_getCurrentNetInfo;
+ (void)setClientIPv4Address:(id)a0;
+ (id)currentDevice;
+ (void)initialize;
+ (id)currentApp;
+ (id)currentUser;

@end

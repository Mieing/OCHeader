@interface DTFSdk : NSObject

+ (int)getSession:(char *)a0 :(int)a1;
+ (void)initIPv6;
+ (void)preload:(id)a0 completion:(id /* block */)a1;
+ (id)getMobileSession;
+ (id)getSecurityInfo;
+ (void)init;
+ (id)getVersion;

@end

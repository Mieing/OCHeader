@interface ASSCommonZZZX : NSObject

+ (void)setupEnvironmentMode:(int)a0;
+ (void)setSecuritySDKConfig:(int)a0;
+ (void)setRpcHeaderAppid:(id)a0;
+ (id)getRpcHeaderAppid;
+ (void)setRpcHeaderWorkspaceid:(id)a0;
+ (id)getRpcHeaderWorkspaceid;
+ (int)getCurrentMode;
+ (void)setupRPCAddress:(id)a0;
+ (int)getSecuritySDKConfig;
+ (id)getRPCURL;
+ (id)getServerHost;
+ (void)setRPCHeader:(id)a0;
+ (id)getRPCHeader;
+ (BOOL)useURLWhitelist;
+ (BOOL)checkDeviceSystemVersion;

@end

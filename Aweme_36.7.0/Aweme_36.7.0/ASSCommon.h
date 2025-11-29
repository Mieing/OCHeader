@interface ASSCommon : NSObject

+ (void)setupEnvironmentMode:(int)a0;
+ (id)getRPCURL;
+ (id)getServerHost;
+ (BOOL)useURLWhitelist;

@end

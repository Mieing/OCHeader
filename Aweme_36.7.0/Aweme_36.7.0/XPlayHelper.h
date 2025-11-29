@interface XPlayHelper : NSObject

+ (id)connectTypeNameForCellularDataService;
+ (id)accessKeyGenUserIDWithUnixTS:(double)a0 gameID:(id)a1;
+ (id)XPlayNetType;
+ (id)accessKeyGenDeviceIDWithUnixTS:(double)a0 gameID:(id)a1;
+ (id)md5StringWithString:(id)a0;
+ (void)checkMethodImplemented;
+ (id)versionNumber;
+ (id)versionString;
+ (BOOL)isIpad;
+ (unsigned long long)netType;

@end

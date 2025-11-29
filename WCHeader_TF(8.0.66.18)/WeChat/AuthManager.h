@interface AuthManager : NSObject

+ (void)showFailedReason:(int)a0;
+ (int)initAuthForQQ;
+ (int)setLicencePath:(id)a0;
+ (int)setLicenceStr:(id)a0;
+ (id)getErrorReason:(int)a0;
+ (void)setIsShowFailedReason:(BOOL)a0;
+ (long long)getEndTime;
+ (void)clearAuthInfo;
+ (int)currentAuthStatus;
+ (int)getVersion;
+ (void)clearLicenceStr;
+ (id)getLicenceStr;

@end

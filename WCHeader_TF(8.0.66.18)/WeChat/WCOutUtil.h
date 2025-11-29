@interface WCOutUtil : NSObject

+ (id)getUserDataDir;
+ (id)getUserCommonDataDir;
+ (id)getWCOutDBPath;
+ (id)getWCOutPackagePath;
+ (id)getWCoutCouponResponseCachePath;
+ (id)getWCOutPackageDirPathForTid:(id)a0;
+ (id)getWCOutPackageFilePathForTid:(id)a0;
+ (id)getWCOutPackageVersionPathForTid:(id)a0;
+ (id)genLastCallContactsCallTime:(unsigned int)a0;
+ (id)wordingForPhoneLable:(id)a0;
+ (void)showAlert:(id)a0 message:(id)a1 delegate:(id)a2 cancelButtonTitle:(id)a3;

@end

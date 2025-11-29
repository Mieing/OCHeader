@interface MMLiteAppPathUtil : NSObject

+ (id)getLiteAppDBPath;
+ (id)getLiteAppTmpPath;
+ (id)getLiteAppVideoPath;
+ (id)getLiteAppCachePath;
+ (id)getLiteAppDataPath;
+ (id)getLiteAppPath:(id)a0 patchId:(id)a1 md5:(id)a2;
+ (id)getLiteAppConfigPath:(id)a0 patchId:(id)a1 md5:(id)a2;
+ (id)getLiteAppBaseLibPath:(id)a0 patchId:(id)a1 md5:(id)a2;
+ (id)getLiteAppBaseLibTmpPath;
+ (id)getLiteAppBaseLibBundlePath;
+ (id)getIlinkCheckResourcePath:(id)a0 resourceName:(id)a1 version:(unsigned int)a2;
+ (id)getLiteAppRootPath;
+ (id)getIlinkCheckResourceRootPath;
+ (id)getLiteAppPackageConfigPath:(id)a0 patchId:(id)a1 md5:(id)a2;
+ (id)getLiteAppDynamicConfigPath:(id)a0 patchId:(id)a1 md5:(id)a2;
+ (id)getMD5ForString:(id)a0;
+ (BOOL)fileExistsAtPath:(id)a0;

@end

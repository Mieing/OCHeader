@interface MBLocalFileStorage : NSObject

+ (id)localIDPrefixWithName:(id)a0;
+ (BOOL)isHomePath:(id)a0;
+ (BOOL)isTempLocalID:(id)a0;
+ (BOOL)isStoreLocalID:(id)a0;
+ (BOOL)isUsrLocalID:(id)a0;
+ (id)tempDirName;
+ (id)cacheSandboxRootDir;
+ (id)tempLocalIDPrefix;
+ (id)storeLocalIDPrefix;
+ (id)usrLocalIDPrefix;
+ (id)tempFileDirWithBizName:(id)a0;
+ (id)storeFileDirWithBizName:(id)a0;
+ (void)createFileStorageDirWithBizName:(id)a0;
+ (id)filePathWithBizName:(id)a0 localID:(id)a1;
+ (BOOL)ak_isSymlink:(id)a0;
+ (id)usrFilePathWithBizName:(id)a0 localID:(id)a1;
+ (id)usrFilePathWithBizName:(id)a0 subPath:(id)a1;
+ (id)tmpOrStorefilePathWithBizName:(id)a0 localID:(id)a1;
+ (BOOL)isMD5StringValid:(id)a0;
+ (id)fileExtensionFromMIMEType:(id)a0;
+ (BOOL)generateTempLocalID:(id *)a0 path:(id *)a1 withBizName:(id)a2 fileType:(id)a3;
+ (BOOL)generatLocalID:(id *)a0 path:(id *)a1 withBizName:(id)a2 fileType:(id)a3 fileDir:(id)a4 localIDPrefix:(id)a5;
+ (unsigned long long)localIDGeneratorIncreaseID;
+ (id)localIDWithLocalIDPrefix:(id)a0 md5:(id)a1 fileType:(id)a2;
+ (BOOL)RenameFileWithLimitChecking:(id)a0 To:(id)a1 ForBiz:(id)a2;
+ (BOOL)isTempPath:(id)a0 bizName:(id)a1;
+ (BOOL)haveFreeSpace:(id)a0 writeSize:(unsigned long long)a1 usrPath:(id)a2;
+ (BOOL)haveFreeTmpSpace:(id)a0 writeSize:(unsigned long long)a1;
+ (BOOL)haveFreeTmpSpace:(id)a0;

@end

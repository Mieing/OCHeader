@interface MBFileSystemUtil : NSObject

+ (id)getDirOfMBFileSystem;
+ (id)getDirOfBiz:(id)a0;
+ (id)getFileUrl:(id)a0 bizName:(id)a1;
+ (id)trimPrefixRelativeURL:(id)a0;
+ (id)trimSuffixRelativeURL:(id)a0;
+ (id)dicFromStat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; })a0;
+ (id)hexStringFromData:(id)a0;
+ (id)stringFromByte:(unsigned char)a0;
+ (id)MBCacheSandboxDirWithBizName:(id)a0;
+ (id)MBCacheSandboxDir;
+ (id)MBTmpDir;
+ (id)MBCacheDir;
+ (id)MBLibrarySandboxDirWithBizName:(id)a0;
+ (id)MBLibrarySandboxDir;
+ (id)MBLibraryDir;
+ (id)MBCacheFileCleanStatusPath;
+ (id)MBUsrFileStatusPath;
+ (id)stringWithSecondsSince1970:(unsigned long long)a0;

- (unsigned long long)disasterTolerantBytesWithMB:(unsigned long long)a0 minSizeMB:(unsigned long long)a1;

@end

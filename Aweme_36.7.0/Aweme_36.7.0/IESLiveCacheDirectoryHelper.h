@interface IESLiveCacheDirectoryHelper : NSObject

+ (id)liveCacheDirectoryFullPath;
+ (id)liveCacheDirectoryLastComponent;
+ (unsigned long long)sizeOfItemAtPath:(id)a0 recursive:(BOOL)a1;
+ (unsigned long long)fileSizeAtPath:(id)a0;

@end

@interface AWEFileKitUtil : NSObject

+ (BOOL)useAllocatedDiskSize;
+ (void)createDirWithPath:(id)a0 excludedFromBackup:(BOOL)a1 handler:(id /* block */)a2;
+ (unsigned long long)sizeAtPath:(id)a0;
+ (unsigned long long)checkDiskUsageLevel;

@end

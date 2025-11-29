@interface AWECloudDiskUtility : NSObject

+ (id)fileAttributeAtPath:(id)a0;
+ (id)diskSpace;
+ (id)freeDiskSpace:(BOOL)a0;
+ (long long)longDiskSpace;
+ (id)formatMemory:(long long)a0;
+ (long long)longFreeDiskSpace;
+ (id)formattedMemory:(unsigned long long)a0;
+ (id)usedDiskSpace:(BOOL)a0;
+ (long long)folderSizeAtPath:(id)a0;
+ (long long)fileSizeAtPath:(id)a0;

@end

@interface HMDDiskTool : NSObject

+ (double)getTotalDiskSpace;
+ (long long)getFreeDisk300MBlockSize;
+ (double)getFreeDiskSpaceWithWaitTime:(double)a0;
+ (void)setFreeDiskSpaceCacheTimeInterval:(double)a0;
+ (double)getRecentCachedFreeDiskSpace;
+ (unsigned long long)getFreeDiskSpaceByStatf;
+ (int)getTotalDiskSizeLevel;
+ (long long)getFreeDisk300MBlockSizeWithWaitTime:(double)a0;
+ (long long)getRecentCachedFreeDisk300MBlockSize;
+ (long long)getFreeDisk300MBlockSizeByStatf;
+ (long long)getDisk300MBBlocksFrom:(long long)a0;
+ (id)getFileAccessLastDateAtPath:(id)a0;
+ (unsigned long long)occupiedDiskSizeAtPath:(id)a0;
+ (id)translateRelativePathToAbsolute:(id)a0;
+ (id)purifyTheIgnorePaths:(id)a0;
+ (id)translateAbsolutePathToRelative:(id)a0;
+ (double)getFreeDiskSpace;
+ (unsigned long long)fileSizeAtPath:(id)a0;

@end

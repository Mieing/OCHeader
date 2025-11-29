@protocol HMDDiskUsageDataSource;

@interface HMDDiskUsage : NSObject

@property (retain, nonatomic) id<HMDDiskUsageDataSource> dataSource;

+ (double)getTotalDiskSpace;
+ (long long)getFreeDisk300MBlockSize;
+ (id)fetchTopSizeFilesAtPath:(id)a0 topRank:(unsigned long long)a1;
+ (unsigned long long)folderSizeAtPath:(id)a0 visitor:(id)a1 switchBlock:(id /* block */)a2 sparseParams:(id)a3;
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
+ (unsigned long long)folderSizeAtPath:(id)a0 switchBlock:(id /* block */)a1;
+ (unsigned long long)folderSizeAtPath:(id)a0 switchBlock:(id /* block */)a1 sparseParams:(id)a2;
+ (unsigned long long)folderSizeAtPath:(id)a0 visitor:(id)a1;
+ (unsigned long long)folderSizeAtPath:(id)a0 visitor:(id)a1 switchBlock:(id /* block */)a2;
+ (unsigned long long)folderSizeAtPath:(id)a0;
+ (double)getFreeDiskSpace;
+ (unsigned long long)fileSizeAtPath:(id)a0;

- (id)initWithConfig:(id)a0 visitors:(id)a1 switchBlock:(id /* block */)a2;
- (BOOL)isAbnormalReturnValue;
- (double)getThisAppSpace;
- (long long)getCurrenFolderSpace;
- (id)getFileListsAtPath:(id)a0 forTopRank:(unsigned long long)a1;
- (id)getAppFileListForTopRank:(unsigned long long)a0;
- (id)getExceptionFolders;
- (id)getExceptionFoldersWithTopRank:(long long)a0;
- (id)getOutDateFiles;
- (id)getOutDateFilesWithTopRank:(long long)a0;
- (id)initWithConfig:(id)a0 visitors:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end

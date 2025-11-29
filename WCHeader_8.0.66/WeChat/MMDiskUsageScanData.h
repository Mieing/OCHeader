@class MMDiskUsageScanStat, MMFolderWrap;

@interface MMDiskUsageScanData : NSObject

@property (retain, nonatomic) MMDiskUsageScanStat *m_stat;
@property (retain, nonatomic) MMFolderWrap *m_rootFolder;

+ (id)scanRootDir;
+ (id)getNewDiskUsageScanData;

- (void).cxx_destruct;

@end

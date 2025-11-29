@interface MMPathUtility : NSObject

+ (id)GetDocumentPath;
+ (id)GetLibraryCachePath;
+ (id)DiskUsageDir;
+ (id)DiskUsageStatusPath;
+ (id)DiskUsageScanStatPath;
+ (id)DiskUsageReportDataPath;
+ (id)DiskUsageFolderWrapCacheDataPath;
+ (id)DiskUsageFolderWrapCachePath;
+ (id)DiskUsageFolderWrapCachePathForKey:(id)a0;

@end

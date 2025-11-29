@interface AWEDiskUsage : NSObject

+ (double)freeDiskSpace;
+ (unsigned long long)folderSizeAtPath:(id)a0 visitor:(id)a1;
+ (void)feedbackDiskInfoLog;
+ (unsigned long long)itemAllocatedSizeAtPath:(id)a0 exist:(BOOL *)a1 visitor:(id)a2;
+ (unsigned long long)itemSizeAtPath:(id)a0 exist:(BOOL *)a1 visitor:(id)a2;
+ (double)totalDiskSpace;
+ (unsigned long long)folderAllocatedSizeAtPath:(id)a0 visitor:(id)a1;
+ (unsigned long long)fileAllocatedSizeAtPath:(id)a0;
+ (unsigned long long)fileSizeAtPath:(id)a0;

@end

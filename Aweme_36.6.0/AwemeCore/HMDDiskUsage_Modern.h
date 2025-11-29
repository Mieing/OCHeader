@class NSString, NSMutableDictionary, NSArray, NSHashTable, NSMutableArray, HMDDiskGetDirSizeManager;

@interface HMDDiskUsage_Modern : NSObject <HMDDiskGetDirSizeDelegate, HMDDiskUsageDataSource>

@property (retain, nonatomic) NSMutableArray *allFileList;
@property (retain, nonatomic) NSMutableDictionary *outdatedfilesDictionary;
@property (retain, nonatomic) NSMutableArray *abnormalFolders;
@property BOOL isProcessExit;
@property (copy, nonatomic) NSString *currenFolderPath;
@property (copy, nonatomic) NSArray *ignoredRelativePaths;
@property (nonatomic) unsigned long long minCollectSize;
@property (nonatomic) double outdatedDays;
@property (nonatomic) long long abnormalFolderTotalSize;
@property (nonatomic) long long abnormalFolderSubfilesCount;
@property (nonatomic) unsigned long long dumpAbnormalFileMaxCount;
@property (nonatomic) BOOL checkSparseFile;
@property (nonatomic) double sparseFileLeastDifferPercentage;
@property (nonatomic) unsigned long long sparseFileLeastDifferSize;
@property (nonatomic) BOOL enableDiskSparseFileAlgorithmTimes512;
@property (retain, nonatomic) NSHashTable *visitors;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (retain, nonatomic) HMDDiskGetDirSizeManager *sizeManager;
@property (nonatomic) BOOL forceNeedCallBackScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchTopSizeFilesAtPath:(id)a0 topRank:(unsigned long long)a1;
+ (unsigned long long)folderSizeAtPath:(id)a0 visitor:(id)a1 switchBlock:(id /* block */)a2 sparseParams:(id)a3;
+ (unsigned long long)folderSizeAtPath:(id)a0 switchBlock:(id /* block */)a1;
+ (unsigned long long)folderSizeAtPath:(id)a0 switchBlock:(id /* block */)a1 sparseParams:(id)a2;
+ (unsigned long long)folderSizeAtPath:(id)a0 visitor:(id)a1;
+ (unsigned long long)folderSizeAtPath:(id)a0 visitor:(id)a1 switchBlock:(id /* block */)a2;
+ (unsigned long long)folderSizeAtPath:(id)a0;

- (void)amendOutdatedFilesAtPath:(id)a0;
- (void)folderPath:(id)a0 fileDepth:(int)a1 fileSize:(long long)a2 diskSize:(long long)a3 subfileCount:(unsigned long long)a4 subdirCount:(unsigned long long)a5 lastVisit:(id)a6 lastVisitFromSub:(id)a7 fixedSparseFileSize:(long long)a8 isOutdated:(BOOL *)a9 isAbnormal:(BOOL *)a10;
- (void)filePath:(id)a0 fileDepth:(int)a1 fileSize:(long long)a2 diskSize:(long long)a3 lastVisit:(id)a4 fixedSparseFileSize:(long long *)a5 isOutdated:(BOOL *)a6;
- (BOOL)checkFolderPathIsValid:(id)a0;
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
- (void)currentProcessExit;
- (BOOL)checkWhetherNeedCallBackScheme;
- (id)getCurrentFileListForTopRank:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

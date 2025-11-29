@class NSArray, NSMutableDictionary, NSHashTable, NSString, NSMutableArray, NSMutableSet;

@interface HMDDiskUsage_Legacy : NSObject <HMDDiskUsageDataSource>

@property (retain, nonatomic) NSMutableDictionary *outDatedfilesDictionary;
@property (retain, nonatomic) NSMutableArray *allFileList;
@property (retain, nonatomic) NSMutableArray *abnormalFolders;
@property (copy, nonatomic) NSArray *ignoredRelativePathes;
@property (nonatomic) long long folderSpace;
@property (nonatomic) long long abnormalFolderSize;
@property (nonatomic) long long abnormalFolderFileNumber;
@property (nonatomic) double outdatedDays;
@property (nonatomic) unsigned long long dumpAbnormalFileMaxCount;
@property (nonatomic) double sparseFileLeastDifferPercentage;
@property (nonatomic) unsigned long long sparseFileLeastDifferSize;
@property (nonatomic) BOOL checkSparseFile;
@property (nonatomic) BOOL enableDiskSparseFileAlgorithmTimes512;
@property (retain, nonatomic) NSHashTable *visitors;
@property (copy, nonatomic) NSString *currenFolderPath;
@property BOOL isProcessExit;
@property (nonatomic) unsigned long long minCollectSize;
@property (retain, nonatomic) NSMutableSet *hardLinkSet;
@property (copy, nonatomic) id /* block */ switchBlock;
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

- (id)initWithOutdatedDays:(double)a0 abnormalFolderSize:(long long)a1 abnormalFolderFileNumber:(long long)a2 abnormalFileMaxCount:(long long)a3 ignoreRelativePathes:(id)a4 checkSparseFile:(BOOL)a5 sparseFileLeastDifferPercentage:(double)a6 sparseFileLeastDifferSize:(unsigned long long)a7 targetFolderPath:(id)a8 minCollectSize:(unsigned long long)a9 enableSparseFileNewAlgorithm:(BOOL)a10 visitors:(id)a11 switchBlock:(id /* block */)a12;
- (BOOL)isAbnormalReturnValue;
- (double)getThisAppSpace;
- (long long)getCurrenFolderSpace;
- (id)getFileListsAtPath:(id)a0 forTopRank:(unsigned long long)a1;
- (id)getAppFileListForTopRank:(unsigned long long)a0;
- (id)getExceptionFolders;
- (id)getExceptionFoldersWithTopRank:(long long)a0;
- (id)getOutDateFiles;
- (id)getOutDateFilesWithTopRank:(long long)a0;
- (long long)recursiveCalculateAtPath:(const char *)a0 isAbnormal:(BOOL *)a1 isOutdated:(BOOL *)a2 needCheckIgnorePath:(BOOL)a3 depthLevel:(unsigned long long)a4;
- (id)initWithOutdatedDays:(double)a0 abnormalFolderSize:(long long)a1 abnormalFolderFileNumber:(long long)a2 abnormalFileMaxCount:(long long)a3 ignoreRelativePathes:(id)a4 checkSparseFile:(BOOL)a5 sparseFileLeastDifferPercentage:(double)a6 sparseFileLeastDifferSize:(unsigned long long)a7 targetFolderPath:(id)a8 minCollectSize:(unsigned long long)a9 visitors:(id)a10 switchBlock:(id /* block */)a11;
- (id)initWithOutdatedDays:(double)a0 abnormalFolderSize:(long long)a1 abnormalFolderFileNumber:(long long)a2 ignoreRelativePathes:(id)a3 checkSparseFile:(BOOL)a4 sparseFileLeastDifferPercentage:(double)a5 sparseFileLeastDifferSize:(unsigned long long)a6 targetFolderPath:(id)a7 minCollectSize:(unsigned long long)a8 visitors:(id)a9;
- (id)initWithOutdatedDays:(double)a0 abnormalFolderSize:(long long)a1 abnormalFolderFileNumber:(long long)a2 ignoreRelativePathes:(id)a3 checkSparseFile:(BOOL)a4 sparseFileLeastDifferPercentage:(double)a5 sparseFileLeastDifferSize:(unsigned long long)a6 visitors:(id)a7;
- (id)initWithOutdatedDays:(double)a0 abnormalFolderSize:(long long)a1 abnormalFolderFileNumber:(long long)a2 ignoreRelativePathes:(id)a3 checkSparseFile:(BOOL)a4 sparseFileLeastDifferPercentage:(double)a5 sparseFileLeastDifferSize:(unsigned long long)a6;
- (id)initWithFolderPath:(id)a0 switchBlock:(id /* block */)a1;
- (id)initWithFolderPath:(id)a0 visitor:(id)a1 switchBlock:(id /* block */)a2 sparseParams:(id)a3;
- (unsigned long long)folderSizeAtPath:(id)a0 isAbnormal:(BOOL *)a1 isOutdated:(BOOL *)a2;
- (long long)recursiveCalculateAtPath:(const char *)a0 isAbnormal:(BOOL *)a1 isOutdated:(BOOL *)a2 needCheckIgnorePath:(BOOL)a3;
- (void)calculateTopFiles:(id)a0 fileSize:(long long)a1;
- (id)calculateOutDateFilesAtPath:(const char *)a0 fileSize:(long long)a1 isOutdated:(BOOL *)a2 fileCount:(long long)a3;
- (void)calculateExceptionFilesAtFolderPath:(const char *)a0 folderSize:(long long)a1 isAbnormal:(BOOL *)a2 fileCount:(unsigned long long *)a3;
- (id)initWithOutdatedDays:(double)a0 abnormalFolderSize:(long long)a1 abnormalFolderFileNumber:(long long)a2 abnormalFileMaxCount:(long long)a3 ignoreRelativePathes:(id)a4 checkSparseFile:(BOOL)a5 sparseFileLeastDifferPercentage:(double)a6 sparseFileLeastDifferSize:(unsigned long long)a7 minCollectSize:(unsigned long long)a8 visitors:(id)a9;
- (id)initWithOutdatedDays:(double)a0 abnormalFolderSize:(long long)a1 abnormalFolderFileNumber:(long long)a2 ignoreRelativePathes:(id)a3 checkSparseFile:(BOOL)a4 sparseFileLeastDifferPercentage:(double)a5 sparseFileLeastDifferSize:(unsigned long long)a6 minCollectSize:(unsigned long long)a7 visitors:(id)a8;
- (void)currentProcessExit;
- (id)getCurrentFileListForTopRank:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithFolderPath:(id)a0;

@end

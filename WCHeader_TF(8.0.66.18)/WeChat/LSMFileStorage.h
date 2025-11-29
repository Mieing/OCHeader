@class NSRecursiveLock, NSString, MMLRUCache, LSMFile, NSMutableArray;

@interface LSMFileStorage : NSObject {
    NSRecursiveLock *m_lock;
    NSString *m_root;
    unsigned long long m_fileSizeLimit;
    MMLRUCache *m_cache;
    LSMFile *m_levelZeroFile;
    LSMFile *m_levelOneFile;
    BOOL m_isCompacting;
    unsigned int m_intermediateNextID;
    NSMutableArray *m_intermediateFiles;
    BOOL m_hasFinishFirstCheckCompact;
}

+ (void)ReportOpenFail;
+ (void)ReportLoadFileFail;
+ (void)ReportRenameFail;
+ (void)ReportCloneFileFail;
+ (void)ReportCompactFileFail;
+ (void)ReportWriteItemFail;
+ (void)ReportReadItemFail;

- (id)initWithFolderPath:(id)a0 cacheCapacity:(unsigned int)a1;
- (id)initWithFolderPath:(id)a0 cacheCapacity:(unsigned int)a1 baseFileSize:(unsigned long long)a2;
- (void)dealloc;
- (void)loadFromFile;
- (void)tryFinishFirstCheckCompactFiles;
- (void)checkExpandFile;
- (void)checkCompactFiles;
- (void)compactFiles:(id)a0;
- (void)compactLevelOneWithHandledKeys:(id)a0;
- (BOOL)doCompactLevelOne:(id)a0 handledKeys:(id)a1;
- (BOOL)writeData:(id)a0 toFile:(id)a1;
- (BOOL)writeDatas:(id)a0 toFiles:(id)a1;
- (BOOL)writeDatasAndFileNames:(id)a0;
- (id)dataOfFile:(id)a0;
- (id)dataOfFile:(id)a0 modifyTimeInSeconds:(unsigned int *)a1;
- (unsigned int)modifyTimeInSecondsOfFile:(id)a0;
- (BOOL)containsFile:(id)a0;
- (BOOL)deleteDataOfFile:(id)a0;
- (id)allFileNames;
- (void).cxx_destruct;

@end

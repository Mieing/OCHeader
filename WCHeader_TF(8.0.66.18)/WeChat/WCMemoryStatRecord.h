@class NSString, NSRecursiveLock, WCMemoryStatRecordBaseInfo;

@interface WCMemoryStatRecord : NSObject {
    BOOL m_isCurrentRun;
    BOOL m_isMemoryLogging;
    NSString *m_basePath;
    struct MatrixMemoryFile { unsigned int x0; struct MatrixUnsafeString { void *x0; unsigned long long x1; } x1; struct memory_file *x2; int x3; } *m_memoryFile;
    WCMemoryStatRecordBaseInfo *m_baseInfo;
    struct shared_ptr<std::vector<vm_region_info>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } m_vmRegions;
    NSRecursiveLock *m_infoLock;
    NSRecursiveLock *m_dumpingLock;
    id /* block */ m_allocationsDumpCallback;
    id /* block */ m_leaksDumpCallback;
}

+ (id)newRecordForCurrentRun;
+ (id)loadRecordByPath:(id)a0;

- (id)initWithBaseInfo:(id)a0;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (void)initMemoryFile;
- (void)setUserScene:(id)a0;
- (void)setVMRegions:(struct shared_ptr<std::vector<vm_region_info>> { void *x0; struct __shared_weak_count *x1; })a0;
- (unsigned long long)launchTime;
- (id)recordID;
- (void)onMemoryLoggingStart;
- (void)onMemoryLoggingStop;
- (void)setMemoryDataInvalid;
- (BOOL)isMemoryDataValid;
- (void)dumpVMRegions;
- (void)generateAllocationsReportWithCustomInfo:(id)a0 callback:(id /* block */)a1;
- (void)generateLeaksReportWithCustomInfo:(id)a0 callback:(id /* block */)a1;
- (BOOL)loadBaseInfo;
- (BOOL)saveBaseInfo;
- (BOOL)loadFromFile;
- (void)initPaths;
- (id)recordBasePath;
- (id)recordInfoPath;
- (id)memoryDataPath;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

@class NSString, NSMutableDictionary, WCUserFileScanOperation, NSCountedSet, WCHardlinkFileCache, NSMutableSet, WCHardlinkFileInfoDB, MMTimer;

@interface WCUserFileScanService : MMUserService <WXGImportMessageNotification, MMServiceProtocol>

@property (retain, nonatomic) WCUserFileScanOperation *fileScanOperation;
@property (retain) WCHardlinkFileInfoDB *infoDB;
@property (nonatomic) unsigned long long totalScanFileCount;
@property (nonatomic) unsigned long long totalScanFileSize;
@property (nonatomic) unsigned long long totalHitCacheCount;
@property (nonatomic) unsigned long long currentHardlinkFileCount;
@property (nonatomic) unsigned long long currentHardlinkFileSaveSize;
@property (retain, nonatomic) NSMutableDictionary *currentHardlinkCountInfo;
@property (retain, nonatomic) NSMutableDictionary *currentHardlinkSizeInfo;
@property (nonatomic) unsigned long long nHardlinkFileCount;
@property (nonatomic) unsigned long long nHardlinkFileSaveSize;
@property (retain, nonatomic) NSMutableDictionary *nHardlinkCountInfo;
@property (retain, nonatomic) NSMutableDictionary *nHardlinkSizeInfo;
@property (retain, nonatomic) NSMutableDictionary *cleanUselessSizeInfo;
@property (retain, nonatomic) NSMutableDictionary *cleanUselessCountInfo;
@property (nonatomic) double scanFileStartTime;
@property (nonatomic) double scanFileEndTime;
@property (nonatomic) double hardlinkStartTime;
@property (nonatomic) double hardlinkEndTime;
@property (nonatomic) unsigned long long totalNotConfirmCount;
@property (nonatomic) unsigned long long totalNotGetMp4Md5Count;
@property (retain, nonatomic) WCHardlinkFileCache *fileInfoCache;
@property (nonatomic) BOOL bUseCache;
@property (nonatomic) unsigned long long totalInsertDBCount;
@property (retain, nonatomic) MMTimer *fileScanTimer;
@property (retain, nonatomic) NSMutableSet *inodeNumSet;
@property (retain, nonatomic) NSCountedSet *fileMD5Set;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canLetFileInfoHardLink:(id)a0 with:(id)a1;
+ (id)getDetailInfoFromInfoDict:(id)a0 prefix:(id)a1 suffix:(id)a2 isSize:(BOOL)a3;
+ (id)getRelatedMemoryKV;
+ (BOOL)getStateOfHardLinkDone;
+ (void)setStateOfHardLinkDone:(BOOL)a0;
+ (void)setCurrentLink:(id)a0 with:(id)a1;
+ (void)removeLinkInfo;
+ (id)getBeLinkedInfo;
+ (id)getLinkToInfo;
+ (void)saveLastFinishTime:(unsigned int)a0;
+ (unsigned int)lastFinishTime;
+ (BOOL)isSupportTakeHardLink;
+ (BOOL)isSupportCleanUselessFile;
+ (long long)getTimeIntervalForOneAllHardlink;

- (void)scanServiceBegin;
- (void)scanServiceBeginUseCache:(BOOL)a0;
- (void)scanChatLogFile;
- (void)cleanUselessFile:(id)a0 fileStat:(struct stat { int x0; unsigned short x1; unsigned short x2; unsigned long long x3; unsigned int x4; unsigned int x5; int x6; struct timespec { long long x0; long long x1; } x7; struct timespec { long long x0; long long x1; } x8; struct timespec { long long x0; long long x1; } x9; struct timespec { long long x0; long long x1; } x10; long long x11; long long x12; int x13; unsigned int x14; unsigned int x15; int x16; long long x17[2]; })a1;
- (void)hardlinkFile;
- (void)finishHardlink;
- (id)getFileMD5:(id)a0 withType:(unsigned long long)a1 withSize:(unsigned long long)a2;
- (BOOL)confirmFileInfo:(id)a0;
- (void)syncAtomicHardlink:(id)a0;
- (id)getFinishScanInfo;
- (void)onImportMessageSuccess;
- (BOOL)rejectScan;
- (void)hardlinkScanPhase;
- (void)setupScan;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void).cxx_destruct;

@end

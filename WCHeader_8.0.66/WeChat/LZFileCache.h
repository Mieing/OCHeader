@class NSString, NSMutableDictionary, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface LZFileCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileOptQueue;
@property (nonatomic) void *queueContext;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *cfgfileName;
@property (nonatomic) int fileFD;
@property (nonatomic) void *mapBuf;
@property (nonatomic) unsigned long long fileSize;
@property (retain, nonatomic) NSMutableArray *writeRanges;
@property (retain, nonatomic) NSMutableArray *readRanges;
@property (retain, nonatomic) NSMutableDictionary *dicOptItems;
@property (retain, nonatomic) NSMutableDictionary *dicmapRefforread;
@property (nonatomic) int status;
@property (nonatomic) BOOL bCleaned;
@property (nonatomic) BOOL bCacheFinish;
@property (nonatomic) long long fileCacheErrorType;
@property (retain) NSError *innerError;
@property (readonly, nonatomic) unsigned long long cacheType;
@property (readonly, nonatomic) NSString *filePath;

+ (id)cfgPath:(id)a0;
+ (int)pageSize;
+ (void)preheat:(void *)a0 size:(unsigned long long)a1;

- (id)init;
- (id)initWithFile:(id)a0 queue:(id)a1 context:(void *)a2 type:(unsigned long long)a3;
- (void)dealloc;
- (BOOL)openFileAndSetupMap:(id)a0;
- (BOOL)writeFile:(id)a0 data:(id)a1 isFinish:(BOOL *)a2;
- (void)cleanFileCaching;
- (void)finishWirte:(id)a0;
- (void)endRead:(id)a0;
- (BOOL)readFile:(id)a0 range:(struct _LzRange { unsigned long long x0; unsigned long long x1; })a1 data:(id *)a2;
- (void)close:(BOOL)a0;
- (long long)fileCachedLength:(long long *)a0;
- (long long)fileCachedLength:(long long *)a0 lastOffset:(long long *)a1;
- (long long)fileContinuousCachedLengthWithPosition:(long long)a0;
- (BOOL)stopCaching:(BOOL)a0;
- (struct _LzRange { unsigned long long x0; unsigned long long x1; })calcDownloadRange:(struct _LzRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)loadCacheInfo;
- (BOOL)isFileCacheFinished;
- (unsigned long long)fileRealSize;
- (void)releaseMapping;
- (void)releaseFile;
- (id)mergeInfo;
- (struct _LzRange { unsigned long long x0; unsigned long long x1; })calcDownloadRangeInner:(struct _LzRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)loadCacheInfoInner;
- (BOOL)openFileAndSetupMapInner:(id)a0;
- (BOOL)readFileInner:(id)a0 range:(struct _LzRange { unsigned long long x0; unsigned long long x1; })a1 data:(id *)a2;
- (void)refreshReadRanges;
- (void)mergeRanges:(id)a0;
- (void)fileCacheSuccess;
- (void)savefileCfg;
- (void)loadfilecfg;
- (void).cxx_destruct;

@end

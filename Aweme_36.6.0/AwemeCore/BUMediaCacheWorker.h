@class NSString, BUCacheConfiguration, NSFileHandle, NSError, NSURL, BUContentInfo;

@interface BUMediaCacheWorker : NSObject

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (retain, nonatomic) NSError *setupError;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) BUCacheConfiguration *cacheConfiguration;
@property (nonatomic) BOOL writting;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastRange;
@property (nonatomic) long long rangeCount;
@property (readonly, nonatomic) NSURL *cacheURL;
@property (readonly, nonatomic) BUContentInfo *contentInfo;
@property (readonly, nonatomic) long long preCacheSize;

- (BOOL)cacheData:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (id)cachedDataForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)cachedDataActionsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 containLocal:(BOOL *)a1;
- (BOOL)setContentInfo:(id)a0 error:(id *)a1;
- (void)startWritting;
- (void)finishWritting;
- (BOOL)checkEndlessLoopWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)save;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end

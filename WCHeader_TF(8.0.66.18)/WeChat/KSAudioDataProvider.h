@class NSDictionary, NSString, LZFileCache, LZDownloadTaskItem, KSSongInfo, NSError, NSObject;
@protocol OS_dispatch_queue, KSAudioDataProviderDelegate;

@interface KSAudioDataProvider : NSObject

@property (readonly, nonatomic) KSSongInfo *songInfo;
@property (readonly, nonatomic) LZDownloadTaskItem *cacheItem;
@property (retain, nonatomic) LZFileCache *fileCache;
@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) void *context;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<KSAudioDataProviderDelegate> delegate;
@property (retain) NSDictionary *providerWorkDetail;

- (id)init;
- (id)initWithSongInfo:(id)a0 queue:(id)a1 context:(void *)a2;
- (void)dealloc;
- (BOOL)isReady;
- (id)audioFileExtension;
- (id)audioFileTypes;
- (double)downloadSpeed;
- (BOOL)readFileData:(long long)a0 len:(long long)a1 data:(id *)a2 isEof:(BOOL *)a3;
- (long long)readFileSize;
- (BOOL)prepareAudioData;
- (long long)fileCachingLength:(long long *)a0;
- (BOOL)canReadData:(long long)a0 len:(long long)a1 err:(id *)a2;
- (BOOL)readFileDataInner:(long long)a0 len:(long long)a1 data:(id *)a2 isEof:(BOOL *)a3;
- (void)close:(BOOL)a0;
- (BOOL)isDataCorruption:(id)a0;
- (void)prepareBufferData;
- (void)pauseDownloadData;
- (void)resumeDownloadData;
- (void)prepareSeekingData:(long long)a0;
- (void)prepareTailData:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;

@end

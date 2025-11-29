@class NSObject, WAUniversalAudioPlayerCachePool, WAUniversalAudioInfo;
@protocol OS_dispatch_queue, WAUniversalAudioLoaderDelegate;

@interface WAUniversalAudioLoader : NSObject

@property (retain, nonatomic) WAUniversalAudioInfo *audioInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue;
@property (nonatomic) BOOL needsToSeek;
@property (nonatomic) double seekTimeRecord;
@property (nonatomic) unsigned long long strategy;
@property (retain, nonatomic) WAUniversalAudioPlayerCachePool *cachePool;
@property (nonatomic) BOOL dataLoaded;
@property (weak, nonatomic) id<WAUniversalAudioLoaderDelegate> delegate;

- (id)initWithAudioQueue:(id)a0 cachePool:(id)a1 fileQueue:(id)a2;
- (void)loadWith:(id)a0;
- (void)seekTo:(double)a0;
- (void)loadImplementation:(id)a0;
- (void)handleDataDownloadFinished:(id)a0 path:(id)a1 audioInfo:(id)a2;
- (void)writeDataToDisk:(id)a0 path:(id)a1 completion:(id /* block */)a2;
- (void)loadDataFromDiskImplementation:(id)a0 fileURL:(id)a1;
- (void)readAudioFileFrom:(id)a0 audioInfo:(id)a1 completion:(id /* block */)a2;
- (void)loadDataFromCacheImplementation:(id)a0 cache:(id)a1;
- (void)seekToImplementation:(double)a0;
- (id)generateSkippedPCMBufferImpelementationWith:(id)a0 skipFrame:(long long)a1 error:(id *)a2;
- (void)throwErrorImplementation:(id)a0;
- (void)throwErrorWithTypeImplementation:(unsigned long long)a0;
- (void)throwErrorWithTypeImplementation:(unsigned long long)a0 userInfo:(id)a1;
- (void).cxx_destruct;

@end

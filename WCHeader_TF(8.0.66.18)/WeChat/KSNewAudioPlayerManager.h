@class NSObject, LZFileCacheManager, KSAudioPlayer;
@protocol OS_dispatch_queue, KSAudioLogProtocol;

@interface KSNewAudioPlayerManager : NSObject {
    NSObject<OS_dispatch_queue> *_audioProcessingQueue;
    void *_lzAudioMgrQueueKey;
    LZFileCacheManager *_fileCacheMgr;
}

@property (retain) id<KSAudioLogProtocol> logObj;
@property (weak, nonatomic) KSAudioPlayer *curAudioPlayer;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)setCachePath:(id)a0;
+ (id)cachePath;

- (id)init;
- (id)initInner;
- (void)dealloc;
- (id)fileCacheMgr;
- (id)createAudioPlayer:(id)a0;
- (void *)contextKey;
- (id)curPlayer;
- (void)setDefaultCleanFilter:(id /* block */)a0;
- (void)cleanCacheDir:(id /* block */)a0;
- (BOOL)isFileAlreadCachedByVid:(id)a0 fileExt:(id)a1;
- (BOOL)isFileAlreadCachedByVid:(id)a0;
- (BOOL)isFileAlreadCachedByUrl:(id)a0;
- (BOOL)cacheLocalFile:(id)a0 fileVid:(id)a1 fileExt:(id)a2 removeSrc:(BOOL)a3;
- (id)localCachePath:(id)a0;
- (void)setupAudioSession;
- (void)interruption:(id)a0;
- (void)audioRouteChangeListenerCallback:(id)a0;
- (void)setLogProtocol:(id)a0;
- (void)log:(int)a0 file:(const char *)a1 func:(const char *)a2 line:(int)a3 EFDict:(id)a4 msg:(id)a5;
- (void).cxx_destruct;

@end

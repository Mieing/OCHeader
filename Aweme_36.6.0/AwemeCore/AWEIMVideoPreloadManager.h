@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, IESIMStorageProtocol, OS_dispatch_semaphore;

@interface AWEIMVideoPreloadManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) NSMutableSet *preloadCacheSet;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) id<IESIMStorageProtocol> captionStore;

+ (id)sharedInstance;

- (BOOL)isHitVideoEncodeOptWithMessageType:(long long)a0;
- (void)requestVideoPlayInfoWithMessage:(id)a0 completion:(id /* block */)a1;
- (id)convertTosKeyToVideoId:(id)a0;
- (void)fetchLivePhotoVideo:(id)a0 completion:(id /* block */)a1;
- (id)videoCaptionWithMessage:(id)a0;
- (void)preloadWithMessage:(id)a0 onCompletion:(id /* block */)a1;
- (void)p_downloadLivePhotoVideo:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)trackEvent:(unsigned long long)a0 duration:(double)a1;
- (void)p_preloadVideoWithTosKey:(id)a0 url:(id)a1 onCompletion:(id /* block */)a2;
- (void)p_fetchVideoUrlForMessage:(id)a0 completion:(id /* block */)a1;
- (void)p_fetchWatchOnceVideoUrlForMessage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end

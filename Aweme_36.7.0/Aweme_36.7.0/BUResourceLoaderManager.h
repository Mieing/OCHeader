@class NSMutableDictionary, AVPlayerItem, NSURL, NSString;

@interface BUResourceLoaderManager : NSObject <BUResourceLoaderDelegate, AVAssetResourceLoaderDelegate> {
    struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } _shared_mutexattr_t;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *loaders;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) AVPlayerItem *playItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetURLWithURL:(id)a0;

- (void)resourceLoaderDidLoad:(id)a0 url:(id)a1 error:(id)a2;
- (id)loaderForRequest:(id)a0;
- (id)keyForResourceLoaderWithURL:(id)a0;
- (void)removeDiskCacheResource:(id)a0;
- (void)removeResourceLoaderWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (id)playerItemWithURL:(id)a0;
- (void)dealloc;
- (void)resourceLoader:(id)a0 didCancelLoadingRequest:(id)a1;
- (id)initWithVideoURL:(id)a0;
- (void)requestCancel;

@end

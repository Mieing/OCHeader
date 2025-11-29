@class BUMediaCacheWorker, NSMutableDictionary, NSString, NSURL, NSMutableArray;
@protocol BUResourceLoaderDelegate;

@interface BUResourceLoader : NSObject <BUMediaDownloaderDelegate> {
    struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } _shared_mutexattr_t;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) BUMediaCacheWorker *cacheWorker;
@property (retain, nonatomic) NSMutableArray *mediaDownlader;
@property (retain, nonatomic) NSMutableDictionary *requestDownladerDic;
@property (nonatomic) long long resceiveSize;
@property (copy, nonatomic) id /* block */ loadeFinishBlock;
@property (copy, nonatomic) id /* block */ loadedCancelBlock;
@property (weak, nonatomic) id<BUResourceLoaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mediaDownloader:(id)a0 didReceiveLength:(long long)a1 didFinishedWithError:(id)a2 responseDesc:(id)a3 localCache:(BOOL)a4;
- (void)requestWithSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)addRequest:(id)a0;
- (void)removeRequest:(id)a0;
- (void)dealloc;
- (void)requestCancel;

@end

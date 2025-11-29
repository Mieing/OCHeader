@class NSOperationQueue;
@protocol EffectPlatformRequestDelegate;

@interface ACCFileDownloader : NSObject

@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) id<EffectPlatformRequestDelegate> requestDelegate;

+ (id)sharedInstance;

- (void)setMaxConcurrentCount:(unsigned long long)a0;
- (id)downloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)downloadTaskDict;
- (id)downloadFileWithURLs:(id)a0 downloadPath:(id)a1 downloadQueuePriority:(long long)a2 downloadQualityOfService:(long long)a3 downloadProgress:(id /* block */)a4 completion:(id /* block */)a5;
- (id)downloadFileWithRequests:(id)a0 downloadPath:(id)a1 downloadQueuePriority:(long long)a2 downloadQualityOfService:(long long)a3 downloadProgress:(id /* block */)a4 completion:(id /* block */)a5;
- (id)downloadFileWithRequests:(id)a0 downloadPath:(id)a1 downloadProgress:(id /* block */)a2 completion:(id /* block */)a3;
- (id)downloadCutSameTemplate:(id)a0 url:(id)a1 downloadPath:(id)a2 downloadProgress:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;

@end

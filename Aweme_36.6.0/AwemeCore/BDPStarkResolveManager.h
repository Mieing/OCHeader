@class NSBundleResourceRequest, NSObject;
@protocol OS_dispatch_queue;

@interface BDPStarkResolveManager : NSObject

@property (retain, nonatomic) NSBundleResourceRequest *bundleRequset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadSerialQueue;
@property (nonatomic) BOOL odrFixDisable;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (id)shareManager;

- (void)removeBundleRequest;
- (void)download:(id)a0 length:(long long)a1 completionHandler:(id /* block */)a2 downloadProgressHandler:(id /* block */)a3;
- (void)startDownloadWithAppId:(id)a0;
- (void)executeCompletionHandler:(id)a0 error:(id)a1;
- (void)downloadWithRetryCount:(unsigned int)a0 appId:(id)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end

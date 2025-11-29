@class NSURLSession, NSURLSessionDataTask, NSString, NSMutableSet, UIView, NSMutableArray, MMLiveCDNLivePreloadItem;
@protocol MMLiveCDNLivePreloaderDelegate;

@interface MMLiveCDNLivePreloader : NSObject <NSURLSessionDataDelegate>

@property (retain, nonatomic) NSMutableArray *preloadQueue;
@property (retain, nonatomic) MMLiveCDNLivePreloadItem *curPreloadingItem;
@property (retain, nonatomic) UIView *redundantView;
@property (retain, nonatomic) NSMutableSet *preloadedUrlSet;
@property (retain, nonatomic) NSURLSession *preloadSession;
@property (retain, nonatomic) NSURLSessionDataTask *preloadTask;
@property (weak, nonatomic) id<MMLiveCDNLivePreloaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addUrlToPreloadQueue:(id)a0 andFinderDataItem:(id)a1;
- (void)stopPreloadWithUrl:(id)a0;
- (void)_doStopPreloadWithUrl:(id)a0;
- (void)stopAllPreload;
- (void)doPreload;
- (void)finishPreload;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)callbackErrorWithReason:(id)a0 url:(id)a1;
- (id)errorWithReason:(id)a0;
- (void).cxx_destruct;

@end

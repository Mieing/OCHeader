@class BUMediaCacheWorker, NSString, AVAssetResourceLoadingRequest, NSURL, BUActionWorker;
@protocol BUMediaDownloaderDelegate;

@interface BUMediaDownloader : NSObject <BUActionWorkerDelegate>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) BUMediaCacheWorker *cacheWorker;
@property (retain, nonatomic) BUActionWorker *actionWorker;
@property (retain, nonatomic) AVAssetResourceLoadingRequest *assetResourceLoadingRequest;
@property (nonatomic) BOOL updateContentInformation;
@property (nonatomic) BOOL containLocal;
@property (readonly, nonatomic) unsigned long long workMode;
@property (readonly, nonatomic) AVAssetResourceLoadingRequest *request;
@property (weak, nonatomic) id<BUMediaDownloaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionWorker:(id)a0 didReceiveLength:(long long)a1 didFinishWithError:(id)a2 responseDesc:(id)a3;
- (void)actionWorker:(id)a0 didReceiveData:(id)a1 isLocal:(BOOL)a2;
- (void)actionWorker:(id)a0 didReceiveResponse:(id)a1;
- (void)downloadTaskFromOffset:(unsigned long long)a0 length:(unsigned long long)a1 toEnd:(BOOL)a2;
- (void)fillContentInformation;
- (id)initWithCacheWorker:(id)a0;
- (void)loadWithSize:(unsigned long long)a0;
- (void)loadWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end

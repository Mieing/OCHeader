@class BDATC2SConfig, NSURLSession, NSString, BDATCache;
@protocol BDATC2STrackerDelegate;

@interface BDATC2STracker : NSObject <NSURLSessionTaskDelegate, BDATC2STracker>

@property (retain, nonatomic) NSURLSession *uploadSession;
@property (retain, nonatomic) BDATC2SConfig *config;
@property (retain, nonatomic) BDATCache *cache;
@property (weak, nonatomic) id<BDATC2STrackerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *trackerNamme;

+ (id)sessionConfiguration:(id)a0;

- (void)URLSession:(id)a0 downloadTask:(SEL)a1 didFinishDownloadingToURL:(void /* unknown type, empty encoding */)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)_flex_swizzle_4a6470fb_URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)setupTracker;
- (void)trackURL:(id)a0;
- (void)trackURLs:(id)a0;
- (void)applicationWillResignActiveNotification:(id)a0;
- (void)didReceivedNetworkChange:(id)a0;
- (void)trackURL:(id)a0 model:(id)a1 tokens:(id)a2;
- (void)resumeTrack:(id)a0;
- (void)trackModel:(id)a0;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)applicationWillEnterForegroundNotification:(id)a0;

@end

@class NSURLSession, MMProgressViewEx, NSString, NSURLSessionTask, MMWebImageView;

@interface GameVideoOnlineEditViewController : GameCenterNativeVc <GameVideoEditViewControllerDelegate, NSURLSessionDataDelegate> {
    NSString *_videoUrl;
    NSString *_thumbUrl;
    NSString *_videoPath;
    id /* block */ _resultBlock;
    NSURLSessionTask *_currentTask;
    NSURLSession *_session;
}

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) MMProgressViewEx *progressView;
@property (nonatomic) unsigned long long downloadStartTimeMills;
@property (nonatomic) BOOL isSkipCelluarTips;
@property (nonatomic) long long ssid;
@property (retain, nonatomic) NSString *appId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoUrl:(id)a0 andThumb:(id)a1 andResultBlock:(id /* block */)a2;
- (id)initWithVideoPath:(id)a0 andResultBlock:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)setupViews;
- (void)startDownloadVideo;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)handleDownloadFinished:(id)a0 location:(id)a1;
- (void)onClose;
- (void)handleDownloadFailed:(long long)a0;
- (void)handleDownloadCanceled;
- (void)startVideoEditor:(id)a0;
- (void)handleCompositionSucceed:(id)a0;
- (void)handleCompositionFailed:(long long)a0;
- (void)notifySucceedWithVideoInfo:(id)a0;
- (void)notifyErrorResult:(long long)a0;
- (void)gameVideoEditController:(id)a0 didFinishWithFilePath:(id)a1 withExtra:(id)a2;
- (void)gameVideoEditController:(id)a0 didFailedWithError:(id)a1;
- (void)trackEventExplosured;
- (void)trackEventDownloadCancel;
- (void)trackEventDownloadSucceed;
- (void)trackEventDownloadFailed:(long long)a0;
- (id)buildTrackEventProps:(BOOL)a0 moreAction:(id /* block */)a1;
- (unsigned long long)calculateDownloadDuration;
- (id)reportObjWithPosition:(long long)a0 action:(long long)a1;
- (void).cxx_destruct;

@end

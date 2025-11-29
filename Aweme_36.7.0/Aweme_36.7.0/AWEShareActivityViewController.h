@class NSString, AWEShareActivityView, AWEShareActivityModel, NSTimer, AWEParallelDownloader;

@interface AWEShareActivityViewController : UIViewController <AWEShareActivityViewDelegate>

@property (retain, nonatomic) AWEShareActivityModel *model;
@property (retain, nonatomic) AWEParallelDownloader *currentDownloader;
@property (retain, nonatomic) AWEShareActivityView *activityView;
@property (retain, nonatomic) NSTimer *fakeProgressTimer;
@property (nonatomic) double fakeProgress;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL isFailed;
@property (nonatomic) BOOL autoPause;
@property (nonatomic) BOOL isDowload;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleConnectionChanged:(id)a0;
- (void)clickCloseButton;
- (void)clickShareButton;
- (void)playIfNeed;
- (void)pauseIfNeed;
- (void)requestVideoInfo;
- (void)fallbackOperation;
- (void)beginDownloadWithURLList:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)destinationURL;
- (void)invalidateTimer;
- (void)updateProgress;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)appWillResignActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end

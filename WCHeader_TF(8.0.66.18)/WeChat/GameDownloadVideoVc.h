@class NSString, MMProgressViewEx, MMWebImageView;

@interface GameDownloadVideoVc : MMUIViewController

@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (nonatomic) BOOL starFailed;
@property (retain, nonatomic) MMProgressViewEx *progressView;
@property (nonatomic) BOOL isPopByDownLoadCompleted;
@property (nonatomic) BOOL downloadEventCompleted;
@property (nonatomic) BOOL oriNavigationBarHidden;
@property (nonatomic) BOOL isSkipCelluarTips;
@property (copy, nonatomic) id /* block */ completedBlock;

- (id)initWithVideoUrl:(id)a0 thumbUrl:(id)a1;
- (void)viewDidLoad;
- (void)startDownloadVideo;
- (id)tmpPathForVideoUrl:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupGoBackView;
- (void)goBack;
- (void)setupProgressView;
- (void)endWithErrorMsg:(id)a0;
- (void)notifyDelegateWithErrorMsg:(id)a0;
- (BOOL)checkUrlMatched:(id)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)OnCdnDownload:(id)a0;
- (void)removeTmpPath;
- (void)video:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)OnCdnDownloadProgress:(id)a0;
- (void).cxx_destruct;

@end

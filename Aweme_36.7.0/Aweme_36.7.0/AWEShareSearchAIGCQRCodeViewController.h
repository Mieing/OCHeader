@class NSTimer, NSString, UIView, UIImage, AWEShareContext, UIScrollView, AWEUILoadingView, UIImageView, AWESharePanelView, NSDictionary, BDXBridgeEventSubscriber;
@protocol AnnieXContainerBaseProtocol;

@interface AWEShareSearchAIGCQRCodeViewController : UIViewController <AWESharePanelViewDelegate, BDXContainerLifecycleProtocol, AWEShareSearchAIGCQRCodeProtocol>

@property (retain, nonatomic) AWEShareContext *context;
@property (nonatomic) long long sharePlatformType;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *annieXCardView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *readyToCaptureSubscriber;
@property (retain, nonatomic) UIView *maskView;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) id /* block */ screenshotCompletion;
@property (retain, nonatomic) NSTimer *loadingTimer;
@property (nonatomic) double captureTimeout;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *snapshotImageView;
@property (copy, nonatomic) NSString *snapshotImageUrl;
@property (nonatomic) BOOL isScreenshoting;
@property (retain, nonatomic) AWESharePanelView *sharePanelView;
@property (copy, nonatomic) id /* block */ shareCompletion;
@property (copy, nonatomic) NSDictionary *logParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL darkSharePanel;

+ (Class)aAWESearchModuleServiceCustomerAdaperClass;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (id)allSharePlatforms;
- (BOOL)isSharePlatformAvailable:(long long)a0;
- (id)saveSuccessfullyMessageForShareType:(long long)a0;
- (void)openAppWithShareType:(long long)a0;
- (id)sharePlatformUnavailableMessage:(long long)a0;
- (void)onImageSaveSuccessfully;
- (void)shareItemTapped:(long long)a0;
- (id)initWithShareContext:(id)a0 shareCompletion:(id /* block */)a1;
- (void)setDataWithWebUrl:(id)a0 qrCodeUrl:(id)a1;
- (void)cancelScreenshot;
- (void)monitorShareResult:(unsigned long long)a0;
- (void)beginScreenshot:(id /* block */)a0;
- (id)maskSharePanelLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)saveImageToDocuments:(id)a0;
- (id)loadImageFromDocumentsWithPath:(id)a0;
- (void)loadingTimeOut;
- (void)configScreenshotWebView;
- (void)buildScreenshotWebView;
- (void)aigcImageAddMetaDataMark:(id)a0;
- (void)scrollToDrawWithMaxIndex:(long long)a0 finishBlock:(id /* block */)a1;
- (void)scrollToDraw:(long long)a0 maxIndex:(long long)a1 finishBlock:(id /* block */)a2;
- (void)imageRenderActionsScrollToDraw:(long long)a0 maxIndex:(long long)a1 context:(id)a2 finishBlock:(id /* block */)a3;
- (void)captureFailWithError;
- (BOOL)needScreenshotFallback;
- (long long)fallbackScreenshotDelay;
- (id)initWithShareSearchAIGCModel:(id)a0;
- (id)aAWESearchModuleServiceCustomerAdaper;
- (void)showSharePanel;
- (void)dismiss;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)removeObserver;
- (void)startCapture;
- (void)setupSubviews;
- (void)cancelButtonTapped;

@end

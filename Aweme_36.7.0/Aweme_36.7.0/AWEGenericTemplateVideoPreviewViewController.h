@class AVPlayer, NSString, AVPlayerLayer, DUXButton, UIView, UIScrollView, ACCAnimatedButton;

@interface AWEGenericTemplateVideoPreviewViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) NSString *itemPath;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) DUXButton *reCaptureButton;
@property (retain, nonatomic) DUXButton *useCaptureButton;
@property (retain, nonatomic) UIScrollView *zoomScrollView;
@property (retain, nonatomic) UIView *previewContainer;
@property (retain, nonatomic) UIView *playView;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPlayerLayer *avPlayerLayer;
@property (nonatomic) BOOL cancelDurationLimitStatus;
@property (nonatomic) double needAddItemDuration;
@property (copy, nonatomic) id /* block */ previewViewControllerReCaptureAction;
@property (copy, nonatomic) id /* block */ previewViewControllerUseCaptureAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemPath:(id)a0 cancelDurationLimitStatus:(BOOL)a1 needAddItemDuration:(double)a2;
- (void)clickReCaptureAction;
- (void)clickUseCaptureAction;
- (void)configPlayView;
- (BOOL)isLessThanCaptureDurationStatus;
- (void)runLoopTheMovie:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)handleDoubleTap:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end

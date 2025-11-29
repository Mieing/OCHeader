@class NSString, UIImageView, DUXButton, UIView, UIScrollView, ACCAnimatedButton;

@interface AWEGenericTemplatePhotoPreviewViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) NSString *itemPath;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) DUXButton *reCaptureButton;
@property (retain, nonatomic) DUXButton *useCaptureButton;
@property (retain, nonatomic) UIScrollView *zoomScrollView;
@property (retain, nonatomic) UIView *previewContainer;
@property (retain, nonatomic) UIImageView *photoView;
@property (copy, nonatomic) id /* block */ previewViewControllerReCaptureAction;
@property (copy, nonatomic) id /* block */ previewViewControllerUseCaptureAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemPath:(id)a0;
- (void)configPhotoView;
- (void)clickReCaptureAction;
- (void)clickUseCaptureAction;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)handleDoubleTap:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end

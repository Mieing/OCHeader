@class NSString, ACCSlidesCropControlView, ACCSlidesCropContentView, ACCSlidesCropInfo;
@protocol ACCSlidesCropViewControllerTracker;

@interface ACCSlidesCropViewController : UIViewController <ACCSlidesCropContentViewDelegate, ACCSliesCropControlDelegate>

@property (retain, nonatomic) ACCSlidesCropInfo *cropInfo;
@property (retain, nonatomic) ACCSlidesCropContentView *cropContentView;
@property (retain, nonatomic) ACCSlidesCropControlView *cropControlView;
@property (nonatomic) long long selectCropRatio;
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;
@property (nonatomic) BOOL showed9_16Toast;
@property (nonatomic) double zoomScale;
@property (nonatomic) double lastZoomScale;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (weak, nonatomic) id<ACCSlidesCropViewControllerTracker> tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupView;
- (void)p_setupLayout;
- (void)didEndZoom:(double)a0;
- (BOOL)croppingImageIsDragging;
- (void)closeCrop;
- (void)confirmCropRatio:(long long)a0;
- (void)selectCropRatio:(long long)a0;
- (void)p_showCropRatio9_16ToastIfNeeded:(long long)a0;
- (void)p_showCropRatio9_16Toast;
- (id)initWithCropInfo:(id)a0;
- (void)setupDefaultStatus;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end

@class NSString, UIImage, UIView, UIScrollView;
@protocol LSIMGradientViewProtocol, LSIMPhotoBrowserZoomableViewProtocol;

@interface LSIMImagePreviewer : UIViewController <LSIMPhotoBrowserZoomableViewDelegate>

@property (retain, nonatomic) UIImage *currentImage;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) UIView<LSIMGradientViewProtocol> *headerGradientView;
@property (retain, nonatomic) UIView *returnView;
@property (retain, nonatomic) UIScrollView<LSIMPhotoBrowserZoomableViewProtocol> *browserView;
@property (nonatomic) struct CGPoint { double x; double y; } lastBeginPanLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didLongPressedZoomableView:(id)a0;
- (void)p_setupGesture;
- (void)p_setupView;
- (void)p_loadImageURLIfNeed;
- (id)addReturnButtonOnView:(id)a0;
- (void)onReturnButtonClicked:(id)a0;
- (void)p_willTriggerPanGesture:(id)a0;
- (void)p_willTriggerLongPress;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)setImage:(id)a0;
- (id)initWithImageURL:(id)a0;
- (void)viewDidLoad;

@end

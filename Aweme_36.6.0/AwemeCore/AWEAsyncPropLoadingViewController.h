@class NSTimer, UIView, UITapGestureRecognizer, UIColor, NSString, UIImageView, AWEGradientProgressView, NSNumber, UILabel, ACCAnimatedButton;
@protocol AWEAsyncPropLoadingViewControllerDelegate;

@interface AWEAsyncPropLoadingViewController : UIViewController <AWEAsyncPropLoadingViewControllerProtocol>

@property (retain, nonatomic) AWEGradientProgressView *progressView;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UIImageView *captureImageView;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (retain, nonatomic) UILabel *backLabel;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (retain, nonatomic) UIView *backContainerView;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UITapGestureRecognizer *dismissGesture;
@property (nonatomic) BOOL isGeneratedSuccess;
@property (nonatomic) double backgroundTime;
@property (retain, nonatomic) NSTimer *playTimer;
@property (nonatomic) double progress;
@property (nonatomic) double initialProgress;
@property (nonatomic) double duration;
@property (nonatomic) BOOL immediateFinish;
@property (weak, nonatomic) id<AWEAsyncPropLoadingViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *maskColor;
@property (retain, nonatomic) UIColor *imageViewColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } interactiveFrame;
@property (copy, nonatomic) NSString *tip;
@property (retain, nonatomic) NSNumber *errorLabelTopMarign;
@property (nonatomic) BOOL dismissNotHideError;
@property (nonatomic) long long failType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cameraPreviewViewFrame;
- (void)p_addObserver;
- (void)showErrorView:(id)a0;
- (void)p_removeObserver;
- (void)dismissLoadingWithType:(unsigned long long)a0;
- (void)p_backClicked;
- (void)p_clickedBackText;
- (void)p_gestureRespond;
- (void)updateCaptureImage:(id)a0;
- (void)showLoadingFinishViewWithState:(BOOL)a0 completion:(id /* block */)a1;
- (void)startProgress:(double)a0 startTime:(double)a1 totalTime:(double)a2;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateProgress;
- (void)applicationDidBecomeActive:(id)a0;
- (void)startProgress;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setupViews;
- (void)stopProgress;

@end

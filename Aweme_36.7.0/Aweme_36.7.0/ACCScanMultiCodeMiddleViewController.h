@class UIView, NSString, NSArray, UIImage, UIImageView, NSDictionary, UIButton, UILabel;

@interface ACCScanMultiCodeMiddleViewController : UIViewController <CAAnimationDelegate, ACCScanMultiCodeMiddleViewControllerProtocol, ACCScanMultiCodeMiddleViewControllerStudioProxy>

@property (retain, nonatomic) UIImage *originPhoto;
@property (retain, nonatomic) UIImage *aspectFitPhoto;
@property (nonatomic) long long contentMode;
@property (retain, nonatomic) UIImageView *photoView;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (copy, nonatomic) NSArray *bubbleViews;
@property (nonatomic) BOOL isAutoJumpToResult;
@property (copy, nonatomic) NSDictionary *model;
@property (copy, nonatomic) NSDictionary *trackData;
@property (copy, nonatomic) id /* block */ jumpWithURLBlock;
@property (nonatomic) BOOL shouldUsePopDismiss;
@property (nonatomic) BOOL shouldPreDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickCancelButton;
- (double)getScreenHeight;
- (double)getScreenWidth;
- (struct CGPoint { double x0; double x1; })centerRelativePositionWithParam:(id)a0;
- (void)updateWithImage:(id)a0 contentMode:(long long)a1 paramDict:(id)a2;
- (void)updateWithTrackData:(id)a0;
- (void)loadBubbleViewLoadingAnimation;
- (BOOL)deviceIsIpad;
- (void)adjustIpadStartOrient;
- (void)layoutAllSubView;
- (void)loadMaskViewLoadingAnimation;
- (void)autoJumpToResult;
- (double)fetchPhotoScale:(id)a0;
- (id)imageCompressWithSimple:(id)a0 ToScale:(double)a1;
- (void)createBubbleViews;
- (void)updateWithImage:(id)a0 andParamDict:(id)a1;
- (struct CGPoint { double x0; double x1; })fetchBubbleViewCenterWithPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)clickBubble:(id)a0;
- (void)loadUIOptimizationBubbleViewBreatheAnimation;
- (void)trackClickCancelButton;
- (void)layoutCancelButton;
- (void)layoutTipLabel;
- (void)layoutIdentifyBubbles;
- (void)loadUIOptimizationBubbleViewLoadingAnimation;
- (void)dismiss;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)applicationDidBecomeActive;
- (id)init;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;

@end

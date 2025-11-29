@class AWEAwemeModel, UIView, UITapGestureRecognizer, CMCEvent, NSString, UIButton, UIPanGestureRecognizer, AWEAdSpecialWebViewController;

@interface AWEAdFormViewController : UIViewController <UIGestureRecognizerDelegate, AWEAdFormViewController>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isFormSubmitted;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backDropView;
@property (retain, nonatomic) AWEAdSpecialWebViewController *webViewController;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) struct CGPoint { double x; double y; } startPosition;
@property (nonatomic) double keyboardOffset;
@property (retain, nonatomic) CMCEvent *entranceEvent;
@property (retain, nonatomic) UITapGestureRecognizer *dismissTapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *dismissPanGesture;
@property (copy, nonatomic) NSString *formURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showWithModel:(id)a0 formURL:(id)a1 event:(id)a2;
+ (void)fetchRelateSearchWordWithModel:(id)a0;
+ (BOOL)isShowing;

- (void)formDidSubmit;
- (void)selfTapped:(id)a0;
- (void)handleDragView:(id)a0;
- (double)viewOffsetForFingerOffset:(double)a0;
- (void)dismissAnimatedWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)addMaskLayerForLayer:(id)a0;
- (void)dismissAnimated;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)keyboardFrameChanged:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)addObservers;

@end

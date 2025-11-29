@class NSString, DUXPartialSheet, NSObject, UIViewController;
@protocol AWEAdHalfPageProtocol, AWEAdPopMarqueeViewManager;

@interface AWEAdHalfPageViewController : UIViewController <DUXPartialSheetDelegate>

@property (nonatomic) BOOL isFullScreen;
@property (weak, nonatomic) DUXPartialSheet *partialSheet;
@property (weak, nonatomic) UIViewController<AWEAdHalfPageProtocol> *popupViewController;
@property (retain, nonatomic) NSObject<AWEAdPopMarqueeViewManager> *popTextManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)popupViewController:(id)a0;

- (void)partialSheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void)partialSheetWillDismiss:(id)a0;
- (double)videoRatio;
- (void)popupWithViewController:(id)a0;
- (BOOL)enableAdWatchWithDisplay;
- (void)setupUIWithPartialSheet;
- (double)durationAdWatchWithDisplay;
- (id)popTextView;
- (void)setupPopManager:(id)a0;
- (void)showFullNavigationAnimation;
- (void)showHalfTopBarAnimation;
- (void)viewControllerTransitionNotification:(id)a0;
- (void)updateContentLabelWithOffset:(double)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end

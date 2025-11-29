@class NSString;

@interface BDCTDisablePanGestureViewController : UIViewController <WKNavigationDelegate>

@property (nonatomic) BOOL disablePodGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSwipe;
- (void)disablePodGestureIfNeeded;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (id)init;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end

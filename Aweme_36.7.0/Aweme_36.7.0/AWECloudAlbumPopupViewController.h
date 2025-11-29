@class UINavigationController, AFDModalViewHelper, NSString, UIView, UIViewController;
@protocol AWECloudAlbumPopupContentVCProtocol;

@interface AWECloudAlbumPopupViewController : UIViewController <AWEPanelTransitionWithBackground, AWECloudAlbumPopupVCProtocol>

@property (retain, nonatomic) AFDModalViewHelper *helper;
@property (retain, nonatomic) UINavigationController *innerNavigation;
@property (retain, nonatomic) UIViewController<AWECloudAlbumPopupContentVCProtocol> *contentVC;
@property (nonatomic) double dragDistance;
@property (nonatomic) BOOL isResetting;
@property (retain, nonatomic) UIView *topViewForVoiceOver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showPopupVCWithContentVC:(id)a0 completion:(id /* block */)a1;
+ (void)showPopupVCWithContentView:(id)a0 completion:(id /* block */)a1;

- (BOOL)wantsDimmingTransitionBackground;
- (void)transitionBackgroundViewTapped:(id)a0;
- (void)dismissPopupVCWithCompletion:(id /* block */)a0;
- (id)initWithContentVC:(id)a0;
- (void)panGestureDidFinshed;
- (void)addPanGesture;
- (void).cxx_destruct;
- (void)pan:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;

@end

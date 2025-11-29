@class AWEUserLoginBaseViewModel, NSString, UIView, NSNotification, UITapGestureRecognizer;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginBaseViewController : UIViewController <UIGestureRecognizerDelegate>

@property (nonatomic) BOOL isKeyboardShow;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL viewIsDidAppear;
@property (retain, nonatomic) NSNotification *keyboardNotification;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) UIView *bottomView;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserModuleServiceDOUYINSSAdapterClass;

- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)pageBtm;
- (void)skipAction;
- (void)tapGestureAction:(id)a0;
- (id)aAWEUserModuleServiceDOUYINSSAdapter;
- (BOOL)isHalfScreenPage;
- (void)handleDeviceOrientationChangeNotification;
- (void)addTapGestureRecognizer;
- (void)handleKeyboardNSNotification;
- (void)cursorFocusWhenAppear;
- (void)handleKeyboardWillChange:(id)a0;
- (void)startBinding;
- (void)processLoginSuccess;
- (void)backToSMSLoginVC;
- (void)updateThirdLoginSheetShowIfNeed;
- (void)handleThirdLoginSheetShowStateIfNeed:(id)a0;
- (void)dismissHalfScreenViewControllerWithType:(long long)a0;
- (void)dismissFullScreenViewController;
- (void)_handleKeyboardWillChange:(id)a0;
- (void)updateViewLayoutForKeyboardAndRotate:(struct CGSize { double x0; double x1; })a0;
- (BOOL)needUpdateViewLayoutForKeyboardAndRotate;
- (void)updatePadHalfScreenLayout:(struct CGSize { double x0; double x1; })a0;
- (void)updatePadFullScreenLayout:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isPad;
- (void)backAction;
- (void).cxx_destruct;
- (void)closeAction;
- (void)handleApplicationDidEnterBackground;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)deviceOrientationDidChange:(id)a0;

@end

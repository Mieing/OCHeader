@class NSString, UITraitCollection;
@protocol AppUserInterfaceSizeDelegate;

@interface MMMainViewController : MMUIViewController <UITraitEnvironment>

@property (weak, nonatomic) id<AppUserInterfaceSizeDelegate> interfaceSizeDelegate;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void)selectTab:(id)a0;
- (void)onSearch:(id)a0;
- (void)onNextUnreadChat:(id)a0;
- (void)newChat:(id)a0;
- (void)closeCurChat:(id)a0;
- (void)onNextChat:(id)a0;
- (void)onLastChat:(id)a0;
- (void)viewDidLoad;
- (double)getContentViewY;
- (void)viewDidTransitionToNewSize;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end

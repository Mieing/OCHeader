@class UIImage, UIFont, BDPAlertView, UIViewController, NSMutableArray, BDPAlertSpringAnimator, UIView, BDPUniqueID, NSString, BDPAlertControllerTheme, UIColor, NSNumber, BDPToolbarLevelControl;

@interface BDPAlertController : UIViewController <UIViewControllerTransitioningDelegate, BDPAlertViewDelegate>

@property (weak, nonatomic) UIViewController *myParentViewController;
@property (retain, nonatomic) UIView *coverView;
@property (readonly, nonatomic) long long alertStyle;
@property (retain, nonatomic) BDPAlertView *alertView;
@property (retain, nonatomic) NSMutableArray *actions;
@property (retain, nonatomic) BDPToolbarLevelControl *toolbarLevelControl;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIFont *titleFont;
@property (copy, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) UIFont *messageFont;
@property (copy, nonatomic) UIColor *messageColor;
@property (copy, nonatomic) NSNumber *cornerRadius;
@property (copy, nonatomic) NSString *placeholderText;
@property (nonatomic) BOOL actionBeforeDismiss;
@property (retain, nonatomic) BDPAlertSpringAnimator *animator;
@property (nonatomic) BOOL editable;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) BDPAlertControllerTheme *theme;
@property (retain, nonatomic) UIView *customBodyView;
@property (retain, nonatomic) NSNumber *customBodyViewHeight;
@property (nonatomic) BOOL needToolbar;
@property (copy, nonatomic) id /* block */ cancelAPICallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertControllerWithTitle:(id)a0 message:(id)a1;
+ (id)themedAlertControllerWithTitle:(id)a0 message:(id)a1;
+ (id)themedAlertControllerWithTitle:(id)a0 message:(id)a1 image:(id)a2;
+ (id)themedAlertControllerWithTitle:(id)a0 message:(id)a1 image:(id)a2 placeholderText:(id)a3 editable:(BOOL)a4;
+ (id)themedCalendarAlertControllerWithTitle:(id)a0 message:(id)a1;
+ (id)alertControllerWithCustomBodyView:(id)a0 customBodyViewHeight:(id)a1 cornerRadius:(id)a2;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)keyBoardWillShow:(id)a0;
- (void)keyBoardWillHide:(id)a0;
- (void)showFromParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissFromParentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithTitle:(id)a0 message:(id)a1 image:(id)a2 theme:(id)a3;
- (id)initWithTitle:(id)a0 message:(id)a1 image:(id)a2 placeholderText:(id)a3 editable:(BOOL)a4 theme:(id)a5;
- (void)addAlertVCViewToSuperView:(id)a0;
- (void)alertView:(id)a0 tapdAction:(id)a1;
- (void)alertView:(id)a0 setMessage:(id)a1;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (BOOL)shouldAutorotate;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForDismissedController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

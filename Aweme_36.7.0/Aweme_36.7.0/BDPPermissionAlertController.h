@class BDPShortTermSubscribeFooterView, NSString, BDPPermissionAlertBaseButtonView, BDPPermissionAlertView, UIView, BDPUniqueID, BDPPrivacyRegulationView;

@interface BDPPermissionAlertController : UIViewController <BDPPermissionViewDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, BDPPrivacyRegulationViewDelegate>

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *additionalDesc;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL shouldRunDisplayAnimation;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) BDPPermissionAlertBaseButtonView *buttonView;
@property (retain, nonatomic) BDPPrivacyRegulationView *privacyView;
@property (retain, nonatomic) BDPPermissionAlertView *permissionView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) BDPShortTermSubscribeFooterView *feedCardView;
@property (copy, nonatomic) id /* block */ cancelButtonClickCompletion;
@property (copy, nonatomic) id /* block */ confirmButtonClickCompletion;
@property (copy, nonatomic) id /* block */ protocolButtonClickCompletion;
@property (copy, nonatomic) id /* block */ viewDidAppearBlock;
@property (copy, nonatomic) id /* block */ viewDidDisappearBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)awe_shouldBypassPresentationHook;
- (id)initWithDescription:(id)a0 iconURL:(id)a1 contentView:(id)a2 buttonView:(id)a3 footerView:(id)a4 feedCardView:(id)a5 privacyView:(id)a6 uniqueID:(id)a7;
- (void)makePermissionViewUnderScreen;
- (void)makePermissionViewOverScreen;
- (void)showViewControllerCompletion:(id /* block */)a0;
- (void)clickPrivacyViewWithType:(unsigned long long)a0;
- (void)clickPrivacyViewWithPersonalizedURL:(id)a0;
- (void)permissionViewDidCancel:(id)a0;
- (void)permissionViewDidConfirm:(id)a0;
- (id)initWithDescription:(id)a0 iconURL:(id)a1 contentView:(id)a2 buttonView:(id)a3 footerView:(id)a4 feedCardView:(id)a5 privacyView:(id)a6 bottomView:(id)a7 uniqueID:(id)a8 additionalDesc:(id)a9;
- (void)onContainerTouched:(id)a0;
- (id)getDismissViewController;
- (void)showViewControllerWithNavigation:(BOOL)a0 completion:(id /* block */)a1;
- (void)confirmButtonDidClickedWhileNotAllowed;
- (void)showViewControllerOnTopWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end

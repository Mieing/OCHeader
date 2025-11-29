@class NSString, UIImageView, RTVXRDegradeService, UILabel, UIButton;
@protocol RTVUserProfileManagerInterface, RxInjector, RTVXRControllerInjector, RTVVoipResourceFetcherInterface, RTVEffectGameContentCameraSheetViewControllerDelegate;

@interface RTVEffectGameContentCameraSheetViewController : UIViewController <RTVEffectGameContentCameraSheetViewController, RTVPageSheetViewControllerProtocol>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) RTVXRDegradeService *degradeService;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *openButton;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL showing;
@property (weak, nonatomic) id<RTVEffectGameContentCameraSheetViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (void)rtv_awakeFromControllerInjector;
- (void)__dismiss;
- (void)__createComponents;
- (void)__layoutComponents;
- (BOOL)enableCloseButtonForPageSheetPresentation;
- (BOOL)enablePullDismissGestureForPageSheetPresentation;
- (id)__color:(long long)a0;
- (void)__cancelButtonTouchUpInside:(id)a0;
- (void)__openButtonTouchUpInside:(id)a0;
- (BOOL)__ableOpenCamera;
- (id)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)isShowing;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (id)showOnViewController:(id)a0;

@end

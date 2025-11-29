@class AFDMomentCameraAlbumViewModel, UINavigationController, CAKModalTransitionDelegate, UIView, UIButton;
@protocol AFDMomentCameraFlowService, ACCTextLoadingViewProtcol;

@interface AFDMomentCameraAlbumComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) UIButton *albumButton;
@property (retain, nonatomic) AFDMomentCameraAlbumViewModel *viewModel;
@property (weak, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (retain, nonatomic) UINavigationController *albumNavigationController;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;

- (void)p_bindObserver;
- (void)componentDidLoad;
- (void)p_openAlbumViewController;
- (void)albumRequestForAuditingWithCallback:(id /* block */)a0;
- (void)onAlbumButtonClick:(id)a0;
- (void)componentWillAppear:(BOOL)a0;
- (void)componentWillDisappear:(BOOL)a0;
- (void)albumRequestAuthority:(id /* block */)a0;
- (void)showRequestAlert;
- (void)showGoToSettingsAlertWithTitle:(id)a0 content:(id)a1 confirmText:(id)a2 cancelText:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void).cxx_destruct;

@end

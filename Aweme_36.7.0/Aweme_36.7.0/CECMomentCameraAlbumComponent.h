@class UINavigationController, NSString, CECMomentCameraAlbumViewModel, CECMomentCameraSwitchModeViewModel, CECMomentCameraSubModeViewModel, UIButton;
@protocol CECMomentCameraFlowService, CECMomentCameraSubModeService, CECMomentCameraAlbumHelperProtocol;

@interface CECMomentCameraAlbumComponent : AFDMomentCameraBaseComponent <CECMomentCameraSubModeSwitchServiceSubscriber>

@property (retain, nonatomic) UIButton *albumButton;
@property (retain, nonatomic) CECMomentCameraAlbumViewModel *viewModel;
@property (retain, nonatomic) CECMomentCameraSubModeViewModel *subModeViewModel;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (retain, nonatomic) UINavigationController *albumNavigationController;
@property (retain, nonatomic) id<CECMomentCameraAlbumHelperProtocol> albumHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_bindObserver;
- (void)componentDidLoad;
- (void)p_openAlbumViewController;
- (void)onAlbumButtonClick:(id)a0;
- (void)componentWillAppear:(BOOL)a0;
- (void)componentWillDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end

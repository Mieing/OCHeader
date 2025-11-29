@class UIButton, CECMomentCameraDownloadViewModel, NSString;
@protocol CECMomentCameraFlowService, CECMomentCameraSubModeService;

@interface CECMomentCameraDownloadComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber>

@property (retain, nonatomic) UIButton *downloadButton;
@property (retain, nonatomic) UIButton *downloadButtonForExchangeRandom;
@property (retain, nonatomic) UIButton *userSettingButton;
@property (retain, nonatomic) CECMomentCameraDownloadViewModel *viewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (void)flowServiceWillChangeToState:(long long)a0 fromState:(long long)a1;
- (void)componentDidLoad;
- (void)showUserSettingViewController;
- (void).cxx_destruct;

@end

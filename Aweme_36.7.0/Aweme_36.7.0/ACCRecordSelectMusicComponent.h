@class NSString, ACCRecorSelectMusicSubscriber, ACCRecordSelectMusicPanel, UIView, ACCRecordSelectMusicServiceImpl;
@protocol ACCVideoEditMusicViewModelProtocol, ACCRecorderViewContainer, ACCScrollStringButtonProtocol, ACCEditMusicServiceProtocol, ACCCameraService, ACCRecordSwitchModeService, ACCRecordPropService;

@interface ACCRecordSelectMusicComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) UIView<ACCScrollStringButtonProtocol> *selectMusicButton;
@property (retain, nonatomic) ACCRecordSelectMusicServiceImpl *viewModel;
@property (retain, nonatomic) id<ACCEditMusicServiceProtocol, ACCVideoEditMusicViewModelProtocol> editMusicViewModel;
@property (retain, nonatomic) ACCRecorSelectMusicSubscriber *serviceSubscriber;
@property (retain, nonatomic) ACCRecordSelectMusicPanel *musicPanelService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (nonatomic) BOOL hasSelectMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidChangeStatusBarOrientation;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (unsigned long long)scrollStringAnimationType;
- (void)ACC_updateLayout;
- (void)p_readExistData;
- (void)addSelectMusicButtonIfNeeded;
- (void)didClickSelectMusicButton;
- (void)configSelectMusicButtonEnable;
- (void)updateSelectMusic;
- (void)didClickCloseButtonOnMusicButton;
- (void)updateSelectMusicEnable;
- (void)updateSelectMusicButtonStatus;
- (void)startAsyncLoadingMusic;
- (void)endAsyncLoadingMusic;
- (BOOL)canShowMusicView;
- (void)updateMusicSelectButtonWithShowCloseButton:(BOOL)a0;
- (void)updateView:(id)a0 Hidden:(BOOL)a1 duration:(double)a2;
- (void).cxx_destruct;
- (id)viewController;

@end

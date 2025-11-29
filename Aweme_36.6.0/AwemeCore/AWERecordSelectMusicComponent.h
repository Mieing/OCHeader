@class AWERecordSelectMusicLayoutAction, ACCRecordSelectMusicServiceImpl, ACCRecorSelectMusicSubscriber, ACCRecordSelectMusicPanel, AWEVideoPublishViewModel, NSString, FPWritableStateFlow;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, ACCMusicModelProtocol, ACCVideoEditMusicViewModelProtocol, ACCEditMusicServiceProtocol, ACCRecordSelectMusicAutoPlayService, ACCDuetSessionSwtichService, ACCCameraService, IESServiceProvider;

@interface AWERecordSelectMusicComponent : NSObject <ACCRecordSwitchModeServiceSubscriber, ACCDuetSessionSwtichServiceSubscriber, FPInitialUIComponent>

@property (class, readonly, nonatomic) Class stateType;

@property (retain, nonatomic) FPWritableStateFlow *stateFlow;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) AWERecordSelectMusicLayoutAction *layoutAction;
@property (retain, nonatomic) id<ACCMusicModelProtocol> lastMusicOnHotSwitch;
@property (retain, nonatomic) ACCRecordSelectMusicServiceImpl *viewModel;
@property (retain, nonatomic) id<ACCEditMusicServiceProtocol, ACCVideoEditMusicViewModelProtocol> editMusicViewModel;
@property (retain, nonatomic) ACCRecorSelectMusicSubscriber *serviceSubscriber;
@property (retain, nonatomic) ACCRecordSelectMusicPanel *musicPanelService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordSelectMusicAutoPlayService> selectMusicAutoPlayService;
@property (retain, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (nonatomic) BOOL hasSelectMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FPWritableStateFlow *typeErasedStateFlow;

+ (id)initialUIStateWith:(id)a0;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentDidDisappear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)lengthModeDidChanged;
- (void)didMount;
- (id)initWith:(id)a0 serviceProvider:(id)a1;
- (void)loadViewState;
- (void)bindViewModel;
- (void)willSwitchToDuetMode;
- (void)didSwitchToDuetMode;
- (void)finishSwitchToNormalMode;
- (void)p_readExistData;
- (id)caculateMusicId;
- (void)didClickSelectMusicButton;
- (void)updateSelectMusic;
- (void)didClickCloseButtonOnMusicButton;
- (void)updateSelectMusicEnable;
- (void)updateSelectMusicButtonStatus;
- (void)startAsyncLoadingMusic;
- (void)endAsyncLoadingMusic;
- (BOOL)canShowMusicView;
- (void)bindLifecycle;
- (BOOL)shouldHideSelectMusicButtonWhenInit;
- (void).cxx_destruct;
- (void)dealloc;

@end

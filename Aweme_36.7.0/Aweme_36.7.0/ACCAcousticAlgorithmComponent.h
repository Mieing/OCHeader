@class NSString, ACCBarItem, ACCGroupedPredicate, NSMutableArray, ACCAnimatedButton;
@protocol ACCDuetSessionSwtichService, ACCRecorderViewContainer, ACCCameraService, ACCRecordFlowService, ACCRecordSystemLivePhotoService, ACCAudioPortService, ACCRecordSidebarService;

@interface ACCAcousticAlgorithmComponent : ACCFeatureComponent <ACCCameraControlEvent, ACCCameraLifeCircleEvent, ACCRecordFlowServiceSubscriber, ACCDuetSessionSwtichServiceSubscriber, ACCRecordSystemLivePhotoServiceSubscriber>

@property (nonatomic) BOOL audioCaptureInitialized;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCRecordSidebarService> sidebarService;
@property (retain, nonatomic) ACCGroupedPredicate *openAECPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *disableAECPredicate;
@property (nonatomic) BOOL AECOpened;
@property (retain, nonatomic) ACCGroupedPredicate *openDAPredicate;
@property (nonatomic) BOOL DAOpened;
@property (retain, nonatomic) ACCGroupedPredicate *openLEPredicate;
@property (nonatomic) BOOL LEOpened;
@property (retain, nonatomic) NSMutableArray *lufsProvider;
@property (retain, nonatomic) ACCGroupedPredicate *openLEDetectionPredicate;
@property (nonatomic) BOOL LEDetectionOpened;
@property (retain, nonatomic) ACCAnimatedButton *EBButton;
@property (retain, nonatomic) ACCBarItem *EBBarItem;
@property (retain, nonatomic) ACCGroupedPredicate *showEBBarItemPredicate;
@property (retain, nonatomic) ACCGroupedPredicate *openEBPredicate;
@property (nonatomic) BOOL userOpenedEarback;
@property (nonatomic) BOOL EBOpened;
@property (retain, nonatomic) ACCGroupedPredicate *forceRecordAudioPredicate;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCAudioPortService> audioPortService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCDuetSessionSwtichService> duetSessionSwtichService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCreateCameraCompleteWithCamera:(id)a0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)recordSystemLivePhotoInnerSwitch:(BOOL)a0;
- (void)onDidInitAudioCapture;
- (void)onWillReleaseAudioCapture;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)openAlgorithmsIfNeeded;
- (void)enableForceRecordAudioIfNeeded;
- (void)updateBarItemsVisibility;
- (void)createEBBarItem;
- (void)resetDAIfNeeded;
- (void)openAECIfNeeded;
- (void)openDAIfNeeded;
- (void)openRealTimeLEProcessingIfNeeded;
- (void)openLEDetectionIfNeeded;
- (void)openEBIfNeeded;
- (void)ebButtonClicked;
- (void)trackClickListenBack;
- (void)willSwitchToDuetMode;
- (void)didSwitchToDuetMode;
- (void)willSwitchToNormalMode;
- (void)didSwitchToNormalMode;
- (void)registerLUFSProvider:(id /* block */)a0;
- (void)unregisterLUFProvider:(id /* block */)a0;
- (void).cxx_destruct;

@end

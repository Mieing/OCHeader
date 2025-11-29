@class NSString, RACSubject, RACSignal, IESEffectModel;
@protocol ACCRecordSwitchModeService, ACCRecordFlowService, ACCCameraService, ACCRecordSystemLivePhotoService, ACCAudioPortService, ACCRecordPropService;

@interface ACCMicrophoneViewModel : ACCRecorderViewModel <ACCRecordFlowServiceSubscriber, ACCMicrophoneService>

@property (nonatomic) BOOL isSupportedMode;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (nonatomic) unsigned long long currentMicBarState;
@property (retain, nonatomic) id<ACCAudioPortService> audioPortService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) RACSubject *micStateSubject;
@property (readonly, nonatomic) BOOL shouldOpenAEC;
@property (readonly, nonatomic) IESEffectModel *storedProp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RACSignal *micStateSignal;
@property (nonatomic) BOOL isManual;

- (void)updateAcousticAlgorithmConfig;
- (BOOL)shouldShowMicroBar;
- (BOOL)duetDefaultMicrophoneIsOpen;
- (void)trackClickMicButton;
- (void)setSupportedMode:(BOOL)a0;
- (BOOL)hasHeadsetJoin;
- (BOOL)currentIsDuetSingIsOpen;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setUpSession;

@end

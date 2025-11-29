@class ACCCameraSubscription, NSString, AWERepoDuetModel, AWEVideoPublishViewModel, AWERepoPublishConfigModel;
@protocol ACCRecordSwitchModeService, ACCPropPickerService, ACCDuetLayoutService, ACCRecordPropService, ACCRecorderDuetProtocol, ACCSideslipPropService, ACCCameraService, IESServiceProvider;

@interface ACCDuetSessionSwtichServiceImpl : NSObject <ACCDuetSessionSwtichService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCCameraSubscription *duetLayoutActionSubscription;
@property (retain, nonatomic) id<ACCRecorderDuetProtocol> duetservice;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> recordSwitchModeService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCDuetLayoutService> duetLayoutService;
@property (retain, nonatomic) id<ACCRecordPropService> recordPropService;
@property (retain, nonatomic) id<ACCPropPickerService> propPickerService;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) AWERepoDuetModel *lastRepoDuet;
@property (retain, nonatomic) AWERepoPublishConfigModel *lastRepoPublishConfig;
@property (nonatomic) BOOL isSwitching;
@property (nonatomic) long long lastDuetModeID;
@property (nonatomic) double maxDurationLimit;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) BOOL isDuetModeHotSwitching;
@property (nonatomic) BOOL isSpeedFloatShowing;
@property (nonatomic) BOOL isPropPanelShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDuetSing;
- (id)repoPublishConfigCache;
- (BOOL)enableRecordDuetSwitchMain;
- (BOOL)enableDuetSwitchMainDefaultMain;
- (BOOL)isDuetMode;
- (BOOL)canSwitchCurrentMode;
- (void)switchToRecordDuetMode;
- (void)switchToRecordNormalMode;
- (void)toggleDuetLayoutButton;
- (void)addDuetLayoutActionSubscriber:(id)a0;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)setupRepoDuetConfig;
- (void)cleanRepoDuet;
- (void)saveCurrentRepoDuet:(id)a0 repoPublishConfig:(id)a1;
- (void)p_switchToRecordDuetMode;
- (void)p_switchToRecordNormalMode;
- (void)updatePublishRepoDuetWithLastRepoDuet:(id)a0 repoPublishConfig:(id)a1;
- (void)loadLastRepoDuet;
- (long long)currentDuetModeId;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end

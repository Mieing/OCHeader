@class NSHashTable, NSString, AWEVideoPublishViewModel;
@protocol ACCRecordSwitchModeService, IESServiceProvider, ACCRecordTemplateVideoPreviewService, ACCRecorderDuetProtocol, ACCVideoConfigProtocol;

@interface ACCRecordConfigServiceImpl : NSObject <ACCRecordConfigService>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSHashTable *durationHandlers;
@property (retain, nonatomic) NSHashTable *audioHandlers;
@property (nonatomic) BOOL hasCameraAuth;
@property (nonatomic) BOOL isFixedMaxDuration;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) id<ACCRecordTemplateVideoPreviewService> templateVideoPreviewService;
@property (nonatomic) BOOL shouldIgnoreVideoRecordTimeOpt;
@property (nonatomic) BOOL hasSetupInitialConfig;
@property (retain, nonatomic) id<ACCRecorderDuetProtocol> duetService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)setupInitialConfig;
- (double)videoMaxDuration;
- (void)createVideoDataIfNeeded;
- (void)startFixedMaxDurationMode:(double)a0;
- (void)endFixedMaxDurationMode;
- (void)configPublishModelMaxDurationAfterCameraSetMusic;
- (void)configPublishModelMaxDurationWithAsset:(id)a0 showRecordLengthTipBlock:(BOOL)a1 isFirstEmbed:(BOOL)a2;
- (void)registDurationHandler:(id)a0;
- (void)configAudioIfsetUp:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)registAudioHandler:(id)a0;
- (void)configFinishPublishModel;
- (void)triggerVideoRecordMaxDurationUpdateEnable;
- (void)configVideoDataIfNeeded;
- (void)configPublishModelPhaseInfo;
- (void)configBgmAsset;
- (double)calculateRecordDurationWithAsset:(id)a0 isFirstEmbed:(BOOL)a1;
- (BOOL)currentConditionSupportRecordTimeOptWithAsset:(id)a0;
- (void)recordAudioRelatedInfo;
- (id)caculateMusicId;
- (void).cxx_destruct;

@end

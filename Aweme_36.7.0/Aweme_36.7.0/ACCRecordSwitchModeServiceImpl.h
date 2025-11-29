@class NSHashTable, NSString, NSArray, ACCCameraSubscription, ACCRecordMode, NSMutableDictionary, AWEVideoPublishViewModel, NSMutableArray, ACCGroupedPredicate, AWEStudioRecorderFeatureRecordModesConfig;
@protocol ACCRecordSwitchModeServiceAuthorityChecker, ACCRecordSwitchModeSwitchContextSubscriber, ACCRecordSwitchModeMomentCamera, ACCRecordModeFactory, ACCRecordConfigService, ACCVideoConfigProtocol;

@interface ACCRecordSwitchModeServiceImpl : NSObject <ACCRecordSwitchModeService>

@property (retain, nonatomic) ACCRecordMode *currentRecordMode;
@property (retain, nonatomic) ACCRecordMode *initialRecordMode;
@property (weak, nonatomic) ACCRecordMode *changingToMode;
@property (retain, nonatomic) NSMutableArray *modeArray;
@property (copy, nonatomic) NSArray *tabConfigArray;
@property (nonatomic) BOOL shouldUpdateTabConfigArray;
@property (retain, nonatomic) ACCRecordMode *lastMode;
@property (retain, nonatomic) NSMutableDictionary *modeDicationary;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NSHashTable *lastSubscribers;
@property (retain, nonatomic) ACCGroupedPredicate *shouldShowSwitchModeView;
@property (retain, nonatomic) ACCGroupedPredicate *forbidChangShowSwitchModeView;
@property (nonatomic) BOOL updateSwitchModeViewFadeShowNotify;
@property (retain, nonatomic) id<ACCRecordModeFactory> modeFactory;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCVideoConfigProtocol> videoConfig;
@property (retain, nonatomic) id<ACCRecordConfigService> configService;
@property (retain, nonatomic) AWEStudioRecorderFeatureRecordModesConfig *featureConfig;
@property (weak, nonatomic) id<ACCRecordSwitchModeServiceAuthorityChecker> authorityChecker;
@property (weak, nonatomic) id<ACCRecordSwitchModeSwitchContextSubscriber> switchContextSubscriber;
@property (weak, nonatomic) id<ACCRecordSwitchModeMomentCamera> switchModeMomentCameraSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addMode:(id)a0;
- (void)removeMode:(id)a0;
- (void)switchMode:(id)a0;
- (void)switchToLastVideoRecordMode;
- (BOOL)canSwitchToVideoRecordMode;
- (void)switchToModeWithReplace:(id)a0 newMode:(id)a1 withAnimation:(id /* block */)a2 afterBlock:(id /* block */)a3;
- (void)switchToModeWithId:(long long)a0;
- (BOOL)containsModeWithId:(long long)a0;
- (void)updateTabConfigForModeId:(long long)a0 Block:(id /* block */)a1;
- (BOOL)isInSegmentMode;
- (BOOL)isInSegmentMode:(long long)a0;
- (BOOL)isVideoCaptureMode;
- (BOOL)isFrameIn4_3;
- (BOOL)isFrameIn1_1;
- (void)switchToLengthMode:(long long)a0;
- (void)updateTabConfigArrayWithExitDuet:(BOOL)a0;
- (unsigned long long)getTabConfigIndexWithModeId:(long long)a0;
- (id)getModeWithTabConfigIndex:(unsigned long long)a0;
- (id)getRecordModeWithModeId:(long long)a0;
- (void)registerCurrentModeToByteBenchCenter;
- (void)updateSwitchModeViewShowWithFade:(BOOL)a0;
- (BOOL)enableUpdateScanFamilyMode;
- (void)p_addMode:(id)a0;
- (void)notifyModeArrayChanged;
- (void)updateModeArrayWithCombinedModeId:(long long)a0;
- (long long)setupInitialRecordModeWithEnterFrom;
- (void)p_switchMode:(id)a0 oldMode:(id)a1;
- (id)anyVideoRecordMode;
- (void)passAuthSwitchMode:(id)a0 oldMode:(id)a1;
- (long long)modeIdWithTabConfig:(id)a0;
- (long long)obtainParentModelID:(id)a0;
- (BOOL)isLastSubscriber:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;

@end

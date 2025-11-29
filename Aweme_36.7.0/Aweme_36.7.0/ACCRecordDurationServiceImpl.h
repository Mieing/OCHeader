@class ACCCameraSubscription, NSString, AWEStudioRecorderFeatureAdvancedSettingsConfig, AWEVideoPublishViewModel, ACCAdvancedRecordSettingConfigManager, NSNumber;
@protocol IESServiceProvider;

@interface ACCRecordDurationServiceImpl : NSObject <ACCRecordDurationService>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) ACCAdvancedRecordSettingConfigManager *configManager;
@property (retain, nonatomic) NSNumber *segmentDurationIndex;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWEStudioRecorderFeatureAdvancedSettingsConfig *featureConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (long long)lengthModeWithRecordMode:(id)a0;
- (long long)lengthIndexWithRecordMode:(id)a0;
- (void)storeLengthModeWithIndex:(unsigned long long)a0 recordMode:(id)a1;
- (id)segmentTrackIdentifer:(unsigned long long)a0;
- (id)storyTrackIdentifier:(unsigned long long)a0;
- (BOOL)isSegmentMode:(id)a0;
- (BOOL)isStoryMode:(id)a0;
- (BOOL)isPhotoCanTakeVideo:(id)a0;
- (void)sendRecordDurationChange;
- (long long)lengthModeWithIndex:(unsigned long long)a0;
- (void)setCurrentIndex:(unsigned long long)a0 mode:(id)a1;
- (BOOL)enableUnifiedControl;
- (unsigned long long)currentFastIndex;
- (void).cxx_destruct;
- (long long)buttonType;
- (void)addSubscriber:(id)a0;
- (unsigned long long)currentIndex:(id)a0;
- (unsigned long long)currentSegmentIndex;

@end

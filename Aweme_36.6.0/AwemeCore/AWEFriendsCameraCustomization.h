@class ACCToolBarSortDataSource, NSArray, AWESocialCameraCustomConfiguration, AWEFriendsCameraScenarioDraftModel, AWEStorage, NSNumber, AWEFriendsCameraModeFactory;
@protocol UIViewControllerTransitioningDelegate;

@interface AWEFriendsCameraCustomization : NSObject <AWEStudioCameraCustomization, AWEFriendsCameraCustomizationProtocol>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) ACCToolBarSortDataSource *toolBarSortDataSource;
@property (retain, nonatomic) AWEFriendsCameraModeFactory *modeFactory;
@property (retain, nonatomic) NSNumber *shouldShowPopoverForSocialTextStore;
@property (retain, nonatomic) AWEFriendsCameraScenarioDraftModel *scenarioDraftModel;
@property (weak, nonatomic) id<UIViewControllerTransitioningDelegate> customTransition;
@property (copy, nonatomic) NSArray *tabConfigs;
@property (retain, nonatomic) AWESocialCameraCustomConfiguration *customConfiguration;
@property (retain, nonatomic) NSNumber *landingSubModeID;
@property (nonatomic) BOOL isFromMainRecorder;

+ (Class)aAWEStudioPostPagePOIAdapterClass;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (id)ratioStatusItem;
- (void)configAlbumWithAlbumPageConfig:(id)a0;
- (void)configLivePhotoWithScenarioConfig:(id)a0;
- (void)configCaptureWithScenarioConfig:(id)a0;
- (void)configGestureWithScenarioConfig:(id)a0;
- (void)configRecordToolBarWithScenarioConfig:(id)a0;
- (void)configSpeedControlWithScenarioConfig:(id)a0;
- (void)configBeautyWithScenarioConfig:(id)a0;
- (void)configRecordModeWithScenarioConfig:(id)a0;
- (void)configLiveWithScenarioConfig:(id)a0;
- (void)configAdavanceSettingWithScenarioConfig:(id)a0;
- (void)configFilterWithScenarioConfig:(id)a0;
- (void)configRecordAlbumWithScenarioConfig:(id)a0;
- (void)configPropWithScenarioConfig:(id)a0;
- (void)configRecordCustomizedComponentsWithScenarioConfig:(id)a0;
- (void)configTextModeWithScenarioConfig:(id)a0;
- (void)configEditBasicWithScenarioConfig:(id)a0;
- (void)configEditToolBarWithScenarioConfig:(id)a0;
- (void)configEditStickerWithScenarioConfig:(id)a0;
- (void)configEditFlowControlWithScenarioConfig:(id)a0;
- (void)configEditOtherWithScenarioConfig:(id)a0;
- (void)configEditCustomizedComponentsWithScenarioConfig:(id)a0;
- (void)configEditPublishFlowWithScenarioConfig:(id)a0;
- (void)configPublishNaviBarWithScenarioConfig:(id)a0;
- (void)configPublishCoverWithScenarioConfig:(id)a0;
- (void)configPublishInputWithScenarioConfig:(id)a0;
- (void)configPublishPOIWithScenarioConfig:(id)a0;
- (void)configPublishPrivacySettingWithScenarioConfig:(id)a0;
- (void)configPublishFooterWithScenarioConfig:(id)a0;
- (void)configPublishBasicWithScenarioConfig:(id)a0;
- (id)p_editTextPageConfig;
- (id)socialTextEditStickerConfig;
- (BOOL)shouldShowPopoverForSocialText;
- (id)aAWEStudioPostPagePOIAdapter;
- (id)publishListTemplate;
- (id)customComponentWithClass:(Class)a0 config:(id)a1;
- (id)initialModeTitle;
- (void).cxx_destruct;
- (id)initialMode;
- (id)initWithScene:(unsigned long long)a0;
- (id)businessIdentifier;

@end

@class ACCToolBarSortDataSource, NSArray, AWESocialCameraCustomConfiguration, AWEFriendsCameraScenarioDraftModel, AWEStorage, NSNumber, AWEFriendsCameraModeFactory;
@protocol UIViewControllerTransitioningDelegate;

@interface AWEFriendsCameraCustomizationV2 : NSObject <AWEStudioCameraCustomization, AWEFriendsCameraCustomizationProtocol>

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
+ (id)cameraIdentifier;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (id)ratioStatusItem;
- (void)configLivePhotoWithScenarioConfig:(id)a0;
- (void)configCaptureWithScenarioConfig:(id)a0;
- (void)configGestureWithScenarioConfig:(id)a0;
- (void)configRecordToolBarWithScenarioConfig:(id)a0;
- (void)configSpeedControlWithScenarioConfig:(id)a0;
- (void)configBeautyWithScenarioConfig:(id)a0;
- (void)configRecordModeWithScenarioConfig:(id)a0;
- (void)configLiveWithScenarioConfig:(id)a0;
- (void)configFilterWithScenarioConfig:(id)a0;
- (void)configPropWithScenarioConfig:(id)a0;
- (void)configRecordCustomizedComponentsWithScenarioConfig:(id)a0;
- (void)configTextModeWithScenarioConfig:(id)a0;
- (void)configEditBasicWithScenarioConfig:(id)a0;
- (void)configEditToolBarWithScenarioConfig:(id)a0;
- (void)configEditStickerWithScenarioConfig:(id)a0;
- (void)configEditFlowControlWithScenarioConfig:(id)a0;
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
- (id)initialModeTitle;
- (void)configAdvanceSettingWithScenarioConfig:(id)a0;
- (void)configHDPhotoWithScenarioConfig:(id)a0;
- (void)configAlbumWithScenarioConfig:(id)a0;
- (void)configEditMusicWithScenarioConfig:(id)a0;
- (void)configEditNewStoryPreviewAlbumConfig:(id)a0;
- (void)configPublishUndefinedWithScenarioConfig:(id)a0;
- (id)p_cinemaModeEditPageConfig;
- (void)configCinemaModeEditBasicWithScenarioConfig:(id)a0;
- (void)configCinemaModeBottomPreviewWithEditConfig:(id)a0;
- (void)configCinemaModeEditToolBarWithEditConfig:(id)a0;
- (void)configCinemaModeEditBeautyWithEditConfig:(id)a0;
- (void)configCinemaModeEditStickerWithScenarioConfig:(id)a0;
- (void)p_addAlbumCustomCell:(id)a0;
- (void).cxx_destruct;
- (id)initialMode;
- (id)initWithScene:(unsigned long long)a0;
- (id)businessIdentifier;

@end

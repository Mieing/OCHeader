@class NSObject, AWEIMCameraConfigModel, AWEStorage;
@protocol MTLJSONSerializing;

@interface AWEIMCameraCustomization : NSObject <AWEStudioCameraCustomization>

@property (retain, nonatomic) AWEIMCameraConfigModel *IMConfig;
@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) NSObject<MTLJSONSerializing> *scenarioDraftModel;

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
- (void)configRecordModeWithScenarioConfig:(id)a0;
- (void)configLiveWithScenarioConfig:(id)a0;
- (void)configFilterWithScenarioConfig:(id)a0;
- (void)configRecordAlbumWithScenarioConfig:(id)a0;
- (void)configPropWithScenarioConfig:(id)a0;
- (void)configTextModeWithScenarioConfig:(id)a0;
- (id)customComponentWithClass:(Class)a0 config:(id)a1;
- (void)configAdvanceSettingWithScenarioConfig:(id)a0;
- (id)recordCustomComponens;
- (void)configBeutyWithScenarioConfig:(id)a0;
- (void)configCountdownWithScenarioConfig:(id)a0;
- (void)configFlashWithScenarioConfig:(id)a0;
- (void)configEditBasicWithEditPageConfig:(id)a0;
- (void)configEditToolbarWithEditPageConfig:(id)a0;
- (void)configEditStickerWithEditPageConfig:(id)a0;
- (void)configEditFlowControlWithEditPageConfig:(id)a0;
- (id)editCustomComponents;
- (id)initWithIMConfig:(id)a0;
- (void)configMusicWithScenarioConfig:(id)a0;
- (void).cxx_destruct;
- (id)initialMode;
- (id)businessIdentifier;

@end

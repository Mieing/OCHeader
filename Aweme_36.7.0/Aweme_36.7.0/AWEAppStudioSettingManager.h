@class NSString, NSHashTable;

@interface AWEAppStudioSettingManager : NSObject <AWEAppStudioSettingManager, AWEAppAwemeSettingMessage, AWEUserMessage>

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enablePostDownloadSetting;
+ (long long)maxFansCount;
+ (BOOL)forbidLocalWatermark;
+ (double)firstInstallTime;
+ (id)deviceScore;
+ (BOOL)closeUploadOriginanlFrames;
+ (BOOL)useTTNetForTTFileUploadClient;
+ (long long)httpRetryCount;
+ (double)httpRetryInterval;
+ (long long)frontCameraStabilizationMode;
+ (long long)rearCameraStabilizationMode;
+ (id)publishLinkAdURL;
+ (BOOL)enableWatermarkBackground;
+ (BOOL)enableStarAtlasCoCreator;
+ (BOOL)enableCocreatorWithStarAtlasMission;
+ (BOOL)forbidStoryLocalWatermark;
+ (id)publishStarAtlasURL;
+ (long long)localVideoCacheMaxAge;
+ (long long)localVideoCacheMaxLength;
+ (id)superEntranceModel;
+ (id)specialPlusModel;
+ (id)specialPlusBigAnimationModel;
+ (BOOL)fastPublishNewYearVideo;
+ (BOOL)enableNewStylePublishLiveRecord;
+ (id)xiguaIncomeDetailMessage;
+ (id)xiguaSynchroIncomeBubbleText;
+ (id)xiguaSynchroIncomePopupHintText;
+ (id)xiguaSynchroIncomePopupDetailMessage;
+ (id)grootRecognitionPlaceholderUrl;
+ (long long)publishCaptionMaxLength;
+ (id)momentsGuideConfig;
+ (id)momentsAssetFilterConfig;
+ (long long)momentsFirstScanPerCallbackCount;
+ (long long)momentsScanPeriodCounts;
+ (BOOL)disableLaunchMediaScan;
+ (BOOL)disableMomentsGEORequest;
+ (id)nextMomentsGuideConfig;
+ (id)nextMomentsAssetFilterConfig;
+ (long long)nextMomentsFirstScanPerCallbackCount;
+ (long long)nextMomentsScanPeriodCounts;
+ (BOOL)nextDisableLaunchMediaScan;
+ (BOOL)nextDisableMomentsGEORequest;
+ (void)registerSettingMessageHandler:(id)a0;
+ (void)unregisterSettingMessageHandler:(id)a0;
+ (id)activityWatermarkStruct;
+ (id)musicFeedbackScheme;
+ (id)gameplayConfig;
+ (id)gameplaySpeedConfig;
+ (id)qrCodeTemplateModelArray;
+ (id)hotSpotRelateLynxSchema;
+ (long long)prePostCheckFreqLimit;
+ (id)effectJsonConfig;
+ (BOOL)fastImportPassThroughWithoutCheckRotation;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)awemeSettingDidChange;
- (void)registerSettingMessageHandler:(id)a0;
- (void)unregisterSettingMessageHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

@class NSString, AWESecureArchiveDownloader, NSMutableDictionary, AWECampaignProfileTabbarModel, AWECampaignEntranceModel, NSBundle, AWECampaignPopupWindowModel, AWECampaignFeedPendantModel, AWECampaignLoginBannerModel, AWECampaignProfileActivityModel;

@interface AWECampaignEntranceDataManager : NSObject <AWEAppAwemeSettingMessage, AWECampaignEntranceDataManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *imagesToDataDictonary;
@property (retain, nonatomic) AWESecureArchiveDownloader *downloader;
@property (retain, nonatomic) NSBundle *remoteResourcesBundle;
@property (retain, nonatomic) AWECampaignEntranceModel *entranceModel;
@property (retain, nonatomic) AWECampaignFeedPendantModel *feedPendantModel;
@property (retain, nonatomic) AWECampaignProfileTabbarModel *profileTabbarModel;
@property (retain, nonatomic) AWECampaignLoginBannerModel *loginBannerModel;
@property (retain, nonatomic) AWECampaignPopupWindowModel *popupWindowModel;
@property (retain, nonatomic) AWECampaignProfileActivityModel *profileActivityModel;
@property (nonatomic) BOOL visitedActivityPageInCurrentLaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCampaignEnabled;
+ (void)startObserveCampaignSettings;
+ (id)campaignSetting;
+ (BOOL)showForAll;
+ (id)googleCampaignName;
+ (BOOL)isMatchingCampaignName:(id)a0;
+ (void)dismissRewardNotificationIfNeeded;
+ (void)showWebPage;
+ (id)sharedInstance;
+ (id)activityID;
+ (BOOL)isNewUser;

- (void)awemeSettingDidChange;
- (void)monitorService:(id)a0 status:(unsigned long long)a1 level:(unsigned long long)a2 error:(id)a3 extraInfo:(id)a4;
- (void)downloadResource;
- (id)lottieNamed:(id)a0;
- (id)pathForResource:(id)a0 ofType:(id)a1 bundle:(id *)a2;
- (void)startObserveCampaignSettings;
- (void)handleDataWithSetting:(id)a0;
- (void)setupRootFolder;
- (void)downloadLottieJsonFile;
- (BOOL)enableFeedPendantModel;
- (id)fetchImageModelWithImageName:(id)a0;
- (void)upgradeToFullModels;
- (id)resizeImage:(id)a0;
- (void)setupLottieReadyWithResourcePath:(id)a0;
- (BOOL)enableLoginBannerModel;
- (BOOL)enablePopupWindowModel;
- (BOOL)enableProfileTabbarModel;
- (void)updateImageToModelDic;
- (void)setupPartialModels;
- (void)cleanRootFolder;
- (BOOL)enableProfileActivityModel;
- (id)getCompaignTasks;
- (void).cxx_destruct;
- (void)dealloc;

@end

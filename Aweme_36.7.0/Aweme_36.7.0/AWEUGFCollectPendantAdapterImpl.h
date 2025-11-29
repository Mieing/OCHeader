@class MMKV, NSDictionary, NSArray, NSString;
@protocol AWEUGPendantActivityControllerProtocol, AWEUGFCollectControllerProtocol;

@interface AWEUGFCollectPendantAdapterImpl : NSObject <AWEUserMessage, AWEUGPendantAdapterProtocol, AWEUGFCollectSettingProtocol>

@property (nonatomic) double lastRequestCampaignTime;
@property (nonatomic) long long currentSettingVersion;
@property (weak, nonatomic) id<AWEUGPendantActivityControllerProtocol, AWEUGFCollectControllerProtocol> currentVC;
@property (nonatomic) BOOL hasGetData;
@property (nonatomic) BOOL needRetryFeedPendant;
@property (copy, nonatomic) NSDictionary *notLoginConfig;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) BOOL needShowAddWhiteFailToast;
@property (nonatomic) BOOL needExchangePendant;
@property (retain, nonatomic) NSArray *activitysArray;
@property (retain, nonatomic) id<AWEUGPendantActivityControllerProtocol, AWEUGFCollectControllerProtocol> exchangeVC;
@property (copy, nonatomic) NSArray *resourceIdentifyArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identify;
@property (nonatomic) long long pendantVersion;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)trackLogWithKey:(id)a0 message:(id)a1;
- (id)currentFeedContainerViewController;
- (void)pendantResourceDownloadNotify:(id)a0;
- (void)updateModel:(id)a0 notLoginConfig:(id)a1 version:(long long)a2;
- (BOOL)hasGetPendantData;
- (BOOL)InFCollectCampaign;
- (BOOL)isShowingFCollectPendant;
- (void)hidePendantViewFromFeedPendant;
- (unsigned long long)restartTaskIfNeed;
- (unsigned long long)restartTaskAfterDuration:(double)a0;
- (void)checkIfNeedRequestNewDataWithVersion:(id)a0 context:(id)a1;
- (void)needRequestNewData;
- (void)clearUserCloseStorage;
- (BOOL)checkIfCanShowFCollect;
- (BOOL)isUserClosePendant;
- (void)addValueFrom:(id)a0 withOldKey:(id)a1 to:(id)a2 withNewKey:(id)a3;
- (id)splitActivityFromRawData:(id)a0;
- (BOOL)enableShowCollectAtmoOnLoginPanel;
- (long long)getCurrentVersion;
- (BOOL)checkIfCanRequestNewData;
- (void)requestNewCampaignDataWithContext:(id)a0;
- (id)getActivityController;
- (long long)collectAtmoLoginPanelShowFreq;
- (void)preDownloadLottieWithSettings:(id)a0;
- (void)handleAddWhiteFailWithSettingDic:(id)a0;
- (unsigned long long)exchagePendantWithType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)saveCurrentVersion:(long long)a0;

@end

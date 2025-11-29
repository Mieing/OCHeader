@class NSDictionary, AWEXTabReleaseScene, AWECampaignReleaseScene;

@interface AWEUGCampaignMemoryStrategy : NSObject

@property (copy, nonatomic) NSDictionary *memoryThresholdDic;
@property (copy, nonatomic) NSDictionary *viewWillAppearDic;
@property (copy, nonatomic) NSDictionary *viewDidAppearDic;
@property (retain, nonatomic) AWEXTabReleaseScene *xTabPageReleaseHiddenScene;
@property (retain, nonatomic) AWEXTabReleaseScene *xTabcampaignReleaseNativeCallScene;
@property (retain, nonatomic) AWECampaignReleaseScene *campaignReleaseJSCallScene;

+ (id)sharedManager;

- (BOOL)needStartMemoryMonitoring;
- (BOOL)needReleaseXTabWhenPageHidden;
- (BOOL)needAddMemoryWarningNotification;
- (BOOL)needHookViewWillAppear;
- (BOOL)needHookViewDidAppear;
- (BOOL)needReleaseXTabWhenMemoryMonitorCallBack;
- (id)memoryMonitorMemoryThresholdValue;
- (double)availabelMemory;
- (BOOL)needReleaseXTabPageWhenNativeCallViewWillAppearWithClassName:(id)a0;
- (id)viewAppearStrategy;
- (id)viewAppearMemoryThresholdWithClassName:(id)a0;
- (BOOL)needReleaseXTabPageWhenNativeCallViewDidAppearWithClassName:(id)a0;
- (BOOL)needReleaseCampaignPageWhenCallJSBWithMemoryLevel:(id)a0;
- (id)memoryValueWithMemoryLevel:(id)a0;
- (id)jsbCallStrategy;
- (BOOL)needReleaseWithMemoryLevel:(id)a0;
- (BOOL)needReleaseXTabPageWhenNativeCallWithClassName:(id)a0 sceneDic:(id)a1;
- (double)appJetsamMemoryPercent;
- (void).cxx_destruct;

@end

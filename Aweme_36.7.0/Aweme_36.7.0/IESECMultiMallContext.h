@class NSMutableDictionary, IESECMallChannelManager, IESECMallTabTrackerManager, NSDictionary, NSString, IESECMallMultiTabResp;
@protocol IESECMallTabFrameService;

@interface IESECMultiMallContext : NSObject <IESECMallTabTrackerManagerDelegate, IESECMallMultiContextService>

@property (nonatomic) BOOL hasLoaded;
@property (retain, nonatomic) IESECMallChannelManager *channelManager;
@property (retain, nonatomic) IESECMallMultiTabResp *responseModel;
@property (nonatomic) long long defaultSelectedIndex;
@property (retain, nonatomic) NSMutableDictionary *tabRouterParamsMap;
@property (retain, nonatomic) IESECMallTabTrackerManager *trackerManager;
@property (copy, nonatomic) NSDictionary *tabExtraInfo;
@property (copy, nonatomic) NSString *mallEnvID;
@property (copy, nonatomic) NSString *mallContainerEnterFrom;
@property (copy, nonatomic) NSString *mallContainerReferString;
@property (copy, nonatomic) NSString *mallContainerPageName;
@property (copy, nonatomic) NSString *preferredTabID;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (nonatomic) BOOL isColdLaunch;
@property (copy, nonatomic) NSString *openTime;
@property (nonatomic) BOOL isSafeMode;
@property (copy, nonatomic) NSString *pageTheme;
@property (weak, nonatomic) id<IESECMallTabFrameService> tabFrameService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers;
- (void)enterSafeMode;
- (void)handleColdStartWithStartTime:(double)a0 result:(id)a1;
- (void)prepareTabRouterParams;
- (id)previousPageSourceForTabID:(id)a0;
- (id)tabRouterParamsWithTabID:(id)a0;
- (id)skinInfoWithTabId:(id)a0 theme:(id)a1;
- (void)clearTabExtraInfo:(id)a0;
- (void)prepareContextInfo;
- (id)viewControllerForIndex:(long long)a0;
- (void)updateTabExtraInfo:(id)a0;
- (void)storeSkinInfo:(id)a0;
- (id)tabInfoWithTabId:(id)a0;
- (id)hostVcWithTabId:(id)a0;
- (id)skinCacheKey;
- (id)defaultSkinInfoWithTabId:(id)a0;
- (BOOL)coldLaunchRequestTopMultiTab;
- (id)respCacheKey;
- (BOOL)needClearCacheData:(id)a0;
- (void)requestTopMultiTabInfo;
- (void)trackerColdLaunchEvent:(long long)a0;
- (id)currentSkinContextWithTabid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)defaultResponse;

@end

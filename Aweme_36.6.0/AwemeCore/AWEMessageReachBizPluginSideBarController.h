@class NSMutableArray, MMKV, AWEMRBizPluginBlockTrackHelper, NSMutableDictionary, AWEMRBizPluginBusinessHandler, NSString, AWEMessageReachComponentContext;
@protocol AWELeftSideBarManagerAbilityProtocol, AWEMessageReachChannelControllerProtocol, AWEMessageReachInternalAbilityProtocol;

@interface AWEMessageReachBizPluginSideBarController : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, AWEBasicModeMessage, AWEMessageReachPluginAbilityProtocol, AWEHPLeftSideBarPluginControllerProtocol, AWEMessageReachSideBarProtocol>

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (retain, nonatomic) id<AWEMessageReachChannelControllerProtocol> componentController;
@property (retain, nonatomic) MMKV *mmkv;
@property (nonatomic) long long badgeCount;
@property (retain, nonatomic) NSMutableDictionary *badgeToShowMap;
@property (weak, nonatomic) id<AWELeftSideBarManagerAbilityProtocol> sideBarManagerAbility;
@property (retain, nonatomic) AWEMRBizPluginBlockTrackHelper *blockTrackHelper;
@property (retain, nonatomic) AWEMRBizPluginBusinessHandler *bizHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEMessageReachComponentContext *showContext;
@property (retain, nonatomic) NSMutableArray *componentList;
@property (readonly, nonatomic) BOOL isBottomChannel;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)addNotification;
- (void)onLeftSideBarDidCreate:(id)a0;
- (void)onLeftSideBarDidOpen:(id)a0;
- (void)clearAllStatus;
- (void)handleComponentActionToChannelPluginWithSceneModel:(id)a0 paramContext:(id)a1;
- (void)clearAllStatusFromSource:(id)a0;
- (id)getUploadCurrentShowComponetInfo;
- (void)sendDataToChannelPluginWithSceneModel:(id)a0 paramContext:(id)a1;
- (void)handleSceneModelShowFailedSceneModel:(id)a0 paramContext:(id)a1;
- (void)getPrecheckComponentResultsWithParamContext:(id)a0 completion:(id /* block */)a1;
- (void)clearAllStatusFromBusinessCall:(id)a0;
- (void)messageReachColdLaunchLoadCacheComplete:(id)a0;
- (BOOL)getCurrentBadgeCanShowStatusWithParamsContext:(id)a0 index:(long long)a1;
- (void)receiveTabVisibilityInfoWithResult:(id)a0;
- (void)updateSideBarNoticeWithResult:(id)a0 component:(id)a1 paramContext:(id)a2;
- (void)handleHideBadgeActionWithSceneModel:(id)a0 paramContext:(id)a1 updateTask:(id)a2;
- (id)getBadgeModelWithBadgeInfo:(id)a0 component:(id)a1 paramContext:(id)a2;
- (void)sideBarCurrentBadgeDidHide;
- (void)hideLeftSideBarBadgeWithBussinessId:(id)a0 hideType:(long long)a1 completion:(id /* block */)a2;
- (void)showBadgeWithResult:(id)a0 component:(id)a1 paramContext:(id)a2;
- (id)getPresenterWithBussunessId:(id)a0;
- (void)leftSideBarShowSuccess:(id)a0 bussinessId:(id)a1;
- (void)showLeftSideBarBussinessEntranceRedDot:(id)a0 model:(id)a1 showCallBack:(id /* block */)a2 hideCallBack:(id /* block */)a3 downgradeCallBack:(id /* block */)a4;
- (void)hideLeftSideBarBussinessEntranceRedDot:(id)a0 hideType:(long long)a1 completion:(id /* block */)a2;
- (id)getRedDotShowParamsWithBadgeInfo:(id)a0 component:(id)a1 paramContext:(id)a2;
- (long long)getLeftSideBarBadgeCount;
- (void).cxx_destruct;
- (id)channelID;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end

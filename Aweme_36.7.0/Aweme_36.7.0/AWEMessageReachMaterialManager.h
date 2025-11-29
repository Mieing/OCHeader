@class AWEMessageReachComponentContext, NSString, NSTimer, AWEMessageReachBlockComponentManager;
@protocol AWEMessageReachHPChannelPluginAbilityProtocol;

@interface AWEMessageReachMaterialManager : NSObject <AWEMessageReachMaterialAbilityProtocol>

@property (weak, nonatomic) id<AWEMessageReachHPChannelPluginAbilityProtocol> plugin;
@property (readonly, nonatomic) AWEMessageReachComponentContext *showContext;
@property (retain, nonatomic) AWEMessageReachBlockComponentManager *blockComponentManager;
@property (retain, nonatomic) NSTimer *removeTimer;
@property (retain, nonatomic) NSTimer *downgradeTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getPreCheckBadgeModelWithVerifyModel:(id)a0 isBottomChannel:(BOOL)a1;
+ (id)getPreCheckBubbleModelWithVerifyModel:(id)a0;

- (void)hideBubbleWithCompletion:(id /* block */)a0;
- (void)hideBubble;
- (BOOL)isChannelLoaded;
- (id)initWithChannelPlugin:(id)a0;
- (void)clearAllCacheBlockModelAndChangeStatus:(unsigned long long)a0;
- (void)showBadgeWithModel:(id)a0 paramContext:(id)a1 showCallBack:(id /* block */)a2;
- (void)showBubbleWithModel:(id)a0 paramContext:(id)a1 showCallBack:(id /* block */)a2;
- (void)hideBadgeWithClearSource:(id)a0 withCompletion:(id /* block */)a1;
- (void)clearAllColdLaunchRecoveryCache;
- (void)clearAllUIStatusFromSource:(id)a0;
- (void)handleDelayedBlockComponentWhenChannelDidLoad;
- (void)handleSplashDisappear;
- (void)getComponentsVerifyResultWithTask:(id)a0;
- (void)handleDelayedBlockComponentWhenChannelTabIsVisible;
- (id)cacheBlockComponentModel;
- (id)getBubbleContentConfigWithModel:(id)a0;
- (void)clearColdLaunchRecoveryCacheWithStorageKey:(id)a0;
- (void)clearAllTimer;
- (void)verifyComponent:(unsigned long long)a0 verifyTask:(id)a1;
- (void)showBadgeCallBack:(id)a0 componentModel:(id)a1 paramContext:(id)a2;
- (void)updateBadgeCallbackContextComponentModel:(id)a0;
- (void)hideBadgeCallBack:(long long)a0 componentModel:(id)a1 paramContext:(id)a2;
- (void)downgradeCallBack:(long long)a0 componentModel:(id)a1;
- (void)hideBadgeWithModel:(id)a0 clearSource:(id)a1 paramContext:(id)a2 completion:(id /* block */)a3;
- (void)showChannelNextShowComponentWithComponentModel:(id)a0 paramContext:(id)a1;
- (void)trackBlockComponentModel:(id)a0 paramContext:(id)a1 blockCode:(long long)a2 blockDesc:(id)a3 extraInfo:(id)a4 result:(long long)a5;
- (void)delayRemoveBadgeWithModel:(id)a0 paramContext:(id)a1;
- (void)delayDowngradeBadgeWithModel:(id)a0 paramContext:(id)a1;
- (void)coldLaunchRecoveryCacheWithModel:(id)a0 paramContext:(id)a1;
- (void)updateChannelAccessibilityValue:(id)a0;
- (void)showBubbleCallBack:(id)a0 componentModel:(id)a1 bubbleModel:(id)a2 paramContext:(id)a3;
- (void)updateBubbleCallbackContextComponentModel:(id)a0;
- (void)clickBubbleSuccessCallBack:(id)a0;
- (void)hideBubbleCallBack:(long long)a0 componentModel:(id)a1 paramContext:(id)a2;
- (BOOL)enableCurrentChannelTabDelayRequestBubble;
- (void)clientTrySendDelayRequestBubbleWithParamContext:(id)a0 resultModel:(id)a1;
- (BOOL)shouldChannelShowNextComponentWithBlockComponentStatus:(unsigned long long)a0;
- (BOOL)shouldClientTrySendDelayRequestBubbleWithResultModel:(id)a0;
- (void)hideBubbleWithModel:(id)a0 completion:(id /* block */)a1;
- (void)removeBadgeWithParams:(id)a0;
- (void)delayDowngradeBadgeWithParams:(id)a0;
- (id)getColdLaunchRecoveryWithStorageKey:(id)a0;
- (void).cxx_destruct;
- (id)channelID;
- (void)dealloc;

@end

@class NSString, AWEBizTabBarItemConfigBadgeModel;
@protocol AWEHPBottomChannelProtocol, AWENormalModeTabBarItemConfigAbility, AWEMessageReachInternalAbilityProtocol, AWEBizTabBarItemConfigProtocol;

@interface AWEMessageReachBizPluginTabBarController : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, AWEBasicModeMessage, AWEMessageReachPluginBaseAbilityProtocol, AWEHPBottomChannelPluginControllerMultiInstanceProtocol, AWEMRDotCountAbilityProtocol>

@property (weak, nonatomic) id<AWEMessageReachInternalAbilityProtocol> config;
@property (retain, nonatomic) AWEBizTabBarItemConfigBadgeModel *retryWaitingModel;
@property (copy, nonatomic) id /* block */ retryWaitingShowCompletion;
@property (retain, nonatomic) AWEBizTabBarItemConfigBadgeModel *currentBadgeModel;
@property (nonatomic) double showTimeStamp;
@property (weak, nonatomic) id<AWEHPBottomChannelProtocol> channelConfig;
@property (weak, nonatomic) id<AWEBizTabBarItemConfigProtocol> itemConfig;
@property (weak, nonatomic) id<AWENormalModeTabBarItemConfigAbility> tabBarAbility;
@property (nonatomic) long long tabBarDotCount;
@property (nonatomic) long long totalShowCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToBottomChannel:(id)a0;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)addNotification;
- (void)setupTabBarAbility:(id)a0;
- (void)hideBadgeWithCompletion:(id /* block */)a0;
- (id)initWithBottomChannel:(id)a0;
- (void)tabDotCountUpdateRequestWithUnreadModel:(id)a0 completion:(id /* block */)a1;
- (void)clearAllStatus;
- (id)getUploadCurrentShowComponetInfo;
- (void)showBadgeWithModel:(id)a0 showCallBack:(id /* block */)a1;
- (void)trackNotificationReddotShowDetailWithModel:(id)a0 result:(long long)a1;
- (void)updateBizBadgeDotHide;
- (void).cxx_destruct;
- (id)channelID;
- (void)dealloc;

@end

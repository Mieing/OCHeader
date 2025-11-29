@class NSSet, NSString;
@protocol IESLCMessageHandlerProtocol;

@interface AWEMateNetworkInterceptor : NSObject <IESLCMessageHandlerService, AWEBizTabBarMessage, AWEBizTabBarLifeCycleMessage>

@property (nonatomic) BOOL isTriggerMateHotActiveBySpreadToken;
@property (nonatomic) BOOL addMateChainSwitch;
@property (copy, nonatomic) NSSet *pathAllowlist;
@property (nonatomic) BOOL lastReadAbValue;
@property (nonatomic) BOOL needTriggerHotActiveByAbValueChanged;
@property (nonatomic) BOOL friendRebrandingAbValue;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)updateFriendRebrandSpreadToken:(long long)a0;
- (void)triggerMateHotActiveIfNeeded;
- (void)tabBarController:(id)a0 didSelectItemType:(long long)a1 previousItemType:(long long)a2;
- (void)p_handleMessageWithObject:(id)a0;
- (void)addIntercept;
- (id)currentLoginUid;
- (void)didReceiveMateApplyPush:(id)a0;
- (void)abTestDidChanged;
- (void)syncSettings;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

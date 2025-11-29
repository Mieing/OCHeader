@class NSDictionary, NSString, NSArray;
@protocol IESLCMessageHandlerProtocol;

@interface AWESocialCountNotificationManager : NSObject <AWESettingsComboRequestProtocol, AWEUserMessage, IESLCMessageHandlerService, AWEConcernFollowListUnreadCacheMessage, AWESocialCountNotificationManagerProtocol>

@property (nonatomic) double lastSocialTimestamp;
@property (copy, nonatomic) NSDictionary *comboSocialRequestResult;
@property (copy, nonatomic) NSString *comboSocialRequestUserID;
@property (copy, nonatomic) NSArray *followTabNotices;
@property (nonatomic) long long returnSource;
@property (nonatomic) BOOL isSwitchUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (void)_aweLazyRegisterStaticLoad;
+ (id)settingsRequestParamsDictionary;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:(id)a0;
+ (void)doOriginalActions;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (void)fetchInteractSocialNotification:(id /* block */)a0 isLongConnectionRequest:(BOOL)a1 context:(id)a2;
- (void)p_handlerMateHotActive:(id)a0;
- (void)fetchInteractSocialCountNotification:(id /* block */)a0 withLongConnectionNotificationType:(long long)a1 context:(id)a2;
- (id)fetchInteractNotificationParams:(long long)a0 targetAPI:(long long)a1;
- (void)processJsonObj:(id)a0 withError:(id)a1 fromSource:(long long)a2 andCompletion:(id /* block */)a3 isComboRequestResult:(BOOL)a4 targetAPI:(long long)a5 context:(id)a6;
- (void)addHomepageFollowMonitorWithError:(id)a0 source:(long long)a1;
- (void)awe_configFollowTabChannelWithDict:(id)a0;
- (void)setupFollowTabNotices:(id)a0 time:(double)a1 type:(long long)a2 context:(id)a3;
- (void)p_handleMessageWithObject:(id)a0;
- (void)addReceiveLongLinkEvent:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

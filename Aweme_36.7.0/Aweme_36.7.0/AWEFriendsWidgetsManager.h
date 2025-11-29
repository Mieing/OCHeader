@class NSString, AWEFriendWidgetTrackContextModel;

@interface AWEFriendsWidgetsManager : NSObject <AWEUserMessage, HTSAppLifeCycle, AWEDigitalWellbeingMessage, AFDCloseFriendsMessage, IESIMLoginManagerMessage, AWEFriendsWidgetsManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL needDelayTransfer;
@property (retain, nonatomic) NSString *delayTransferCID;
@property (nonatomic) long long delayTransferConvType;
@property (retain, nonatomic) AWEFriendWidgetTrackContextModel *trackContext;

+ (id)userDefaultsKeyForWidgetsType:(unsigned long long)a0;
+ (id)kindStringForWidgetType:(unsigned long long)a0;
+ (void)p_asyncGetIESConvWithConvId:(id)a0 convType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)userDefaultsDictForWidgetType:(unsigned long long)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)didUpdateUserOnLaunch;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)updateUserDefaultsForStartShootWidgetWithUserModel:(id)a0;
- (void)setNeedTransferToChatWithConversationID:(id)a0 conversationType:(long long)a1;
- (void)transferToChatIfNeeded;
- (void)updateUserDefaultsWithDict:(id)a0 forWidgetType:(unsigned long long)a1;
- (void)didXTTTokenChanged;
- (void)onboardingTimeUpdated;
- (void)p_updateUserInfoForWidgets;
- (id)userDefaultsKeyForWidgetsType:(unsigned long long)a0;
- (void)synchronizeCookiesWithExtension;
- (void)synchronizeTokenWithExtension;
- (id)localizeForWidgetType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end

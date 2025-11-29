@class AWEIMWidgetDelayModel, NSString;

@interface AWEIMWidgetsManager : NSObject <AWEUserMessage, HTSAppLifeCycle, AWEDigitalWellbeingMessage, IESIMLoginManagerMessage, AWEIMStreakDataCenterMessage, AWEIMWidgets>

@property (retain, nonatomic) AWEIMWidgetDelayModel *delayModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_asyncGetIESConvWithConvId:(id)a0 convType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)localizeForWidgetType:(unsigned long long)a0;
+ (void)transferToChatWithConversationID:(id)a0 conversationType:(unsigned long long)a1 extension:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)imWidgetTypeWithFromWidget:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)didUpdateUserOnLaunch;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)imStreakDataDidUpdateWithConversation:(id)a0;
- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (void)transferToChatIfNeeded;
- (void)updateUserDefaultsWithDict:(id)a0 forWidgetType:(unsigned long long)a1;
- (void)didXTTTokenChanged;
- (id)userDefaultsKeyForWidgetsType:(unsigned long long)a0;
- (void)synchronizeCookiesWithExtension;
- (void)checkIMWidgetsIsSelectingUserID:(id)a0 inKind:(id)a1 withCompletion:(id /* block */)a2;
- (void)trackWidgetInstallWithKind:(id)a0;
- (void)updateCacheForWidgets;
- (void)trackWidgetInstall;
- (void)transferToChatIfNeededCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setup;

@end

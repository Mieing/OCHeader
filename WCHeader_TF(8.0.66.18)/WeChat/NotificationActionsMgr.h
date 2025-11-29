@class UNNotificationSettings, NSString, NSDictionary, NSMutableDictionary, WeToast, NSMutableArray;

@interface NotificationActionsMgr : MMUserService <PBMessageObserverDelegate, UNUserNotificationCenterDelegate, IMMNewSessionMgrExt, MMServiceProtocol> {
    NSMutableDictionary *_actionCompletions;
    WeToast *_toastView;
    NSMutableArray *_sendingMessages;
}

@property BOOL appLaunchedDueToNotification;
@property (readonly, retain, nonatomic) NSDictionary *actionMaping;
@property (readonly, nonatomic) UNNotificationSettings *notificationSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerNotification;
+ (void)setApplicationIconBadgeNumber:(unsigned int)a0;

- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)handleLocalActionWithIdentifier:(id)a0 forUserInfo:(id)a1 withResponseInfo:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleRemoteActionWithIdentifier:(id)a0 forUserInfo:(id)a1 withResponseInfo:(id)a2 completionHandler:(id /* block */)a3;
- (void)handleActionWithIdentifier:(id)a0 forUserInfo:(id)a1 withResponseInfo:(id)a2 isRemote:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)handleMarkAsReadAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleUnlockDeviceAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleReplyAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleReplyYoAction:(id)a0 completionHandler:(id /* block */)a1;
- (void)onAppIconTotalUnreadCountChange:(unsigned int)a0;
- (void)replyText:(id)a0 toUsername:(id)a1 userInfo:(id)a2 completionHandler:(id /* block */)a3;
- (void)notifyUserSendMessageFailWithClientId:(unsigned int)a0 toUsername:(id)a1;
- (void)markChatRead:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned int)genRandomClienMsgId;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleSendMsgResp:(id)a0;
- (void)handleStatusNotifyResp:(id)a0;
- (void)handleReceiveRemoteNotification:(id)a0 requestID:(id)a1;
- (void)handleReceiveLocalNotification:(id)a0;
- (void)handleApnsDeepLink:(id)a0;
- (void).cxx_destruct;

@end

@interface BDUGPushLocalNotificationManager : NSObject

+ (id)sharedInstance;

- (void)sendLocalNotificationAfterIOS10WithPushPayload:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)bd_getNotificationInterruptionLevelWithLevel:(id)a0;
- (id)bd_getNotificationSoundWithSoundName:(id)a0;
- (void)sendLocalNotificationWithPushPayload:(id)a0 content:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendLocalNotificationWithContent:(id)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendLocalNotificationWithPushPayload:(id)a0;
- (void)sendLocalNotificationWithPushPayload:(id)a0 completionHandler:(id /* block */)a1;

@end

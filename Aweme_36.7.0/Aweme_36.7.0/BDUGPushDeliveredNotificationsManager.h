@interface BDUGPushDeliveredNotificationsManager : NSObject

+ (id)currentManager;

- (void)removeDeliveredNotificationsWithThreadIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (void)removeAllDeliveredNotifications;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)a0;

@end

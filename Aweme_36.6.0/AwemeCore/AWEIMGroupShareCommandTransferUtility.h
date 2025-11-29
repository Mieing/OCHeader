@interface AWEIMGroupShareCommandTransferUtility : NSObject

+ (void)transferWithType:(long long)a0 trackingParams:(id)a1 completion:(id /* block */)a2;
+ (void)transferToUserPostWithAwemeID:(id)a0 onNavigationController:(id)a1 completion:(id /* block */)a2;
+ (void)transferToIMShareWithToken:(id)a0 conversationID:(id)a1 shouldShowNotificationBar:(BOOL)a2;
+ (id)eventNameWithShareType:(long long)a0;

@end

@class NSString;

@interface AWEECOMIMPaasNotificationCenter : NSObject

@property (copy, nonatomic) NSString *customBizID;
@property (copy, nonatomic) NSString *notificationID;
@property (nonatomic) BOOL shouldAddCommonParamsToUserInfo;

- (id)generateNotificationKeyWithKey:(id)a0;
- (id)initWithCustomBizID:(id)a0 notificationID:(id)a1;
- (id)addCommonParamsToUserInfo:(id)a0;
- (void)sendNotificationForPigeonWebSocketStateChangedWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForWSMessageDidReceiveNotificationWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForNotifyLongConnectionReceiveMessageWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForNotifyIMMessageDidReceiveResponseWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForNotifyReadMessageChangeWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForNotifyPigeonMessageDidInsertWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForNotifyPigeonMessageUpdateWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForNotifyNewP2PMessageWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForNotifyPigeonConversationUpdateWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForNotifyPigeonConversationListChangeWithObject:(id)a0 userInfo:(id)a1;
- (void)sendNotificationForNotifyPigeonMessagesDeletedWithObject:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;

@end

@class NSString, BDECPigeonClientConfigV2;
@protocol BDECIMCloudIMStatisticV2Delegate, BDECIMCloudAppMessageInsertPluginV2Delegate, BDECIMCloudChangeObserverV2Delegate, BDECIMCloudPullerStatusChangeObserverV2Delegate, BDECIMCloudMessageSenderV2Delegate;

@interface BDECIMCloudCoreBridgeManagerV2 : NSObject <TIMXPullerStatusChangeObserverDelegate, TIMXOChangeObserverDelegate, TIMXOMessageSenderDelegate, BDECIMCloudCoreBridgeManagerV2Interface>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECIMCloudPullerStatusChangeObserverV2Delegate> observerDelegate;
@property (weak, nonatomic) id<BDECIMCloudIMStatisticV2Delegate> statisticDelegate;
@property (weak, nonatomic) id<BDECIMCloudAppMessageInsertPluginV2Delegate> pluginDelegate;
@property (weak, nonatomic) id<BDECIMCloudChangeObserverV2Delegate> changeDelegate;
@property (weak, nonatomic) id<BDECIMCloudMessageSenderV2Delegate> messageSenderDelegate;

+ (void)removeAllIMFileWithAppID:(id)a0 userID:(long long)a1 businessID:(id)a2;
+ (BOOL)removeAllIMFileWithAppID:(id)a0 userID:(long long)a1 businessID:(id)a2 pathUserSuffix:(id)a3;

- (void)newP2PMessageNotifyConversation:(id)a0 message:(id)a1;
- (void)removeObserverWithIdentifier:(id)a0;
- (void)removeTIMChangeObserverWithIdentifier:(id)a0;
- (void)removeTIMOMessageSenderObserverWithIdentifier:(id)a0;
- (id)addTIMOChangeWeakChangeObserver;
- (id)addTIMOMessageSenderWeakObserver;
- (long long)currentAccountID;
- (void)conversationUpdated:(id)a0;
- (void)conversationDidDissolved:(id)a0;
- (void)onDatabaseDamageWithError:(id)a0 accountID:(long long)a1;
- (void)processMessages:(id)a0;
- (BOOL)filterMessage:(id)a0 reason:(id)a1;
- (BOOL)filterMessage:(id)a0;
- (void)pullerInsertNewMessages:(id)a0 reason:(id)a1 context:(id)a2;
- (void)dealMessageWhenWebsocketArrive:(id)a0;
- (void)message:(id)a0 inConversation:(id)a1 didReceiveResponse:(id)a2 error:(id)a3;
- (void)messageUpdated:(id)a0 inConversation:(id)a1 reason:(long long)a2;
- (void)didInsertNewMessagesWithMessageIdentifiers:(id)a0 belongingConversationMap:(id)a1 reason:(unsigned long long)a2 context:(id)a3;
- (void)didStartPullForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2;
- (void)didEndPullForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2 pullDirection:(unsigned long long)a3 error:(id)a4 hasMore:(BOOL)a5 userInfo:(id)a6;
- (void)pullerSimpleStatusDidChangeTo:(long long)a0 forInbox:(int)a1;
- (void)didReceiveTimestamp:(id)a0;
- (void)removeAllIMFileWithAppID:(id)a0 userID:(long long)a1;
- (BOOL)removeAllIMFileWithAppID:(id)a0 userID:(long long)a1 pathUserSuffix:(id)a2;
- (id)addWeakChangesObserverOnQueue:(id)a0;
- (void)didEndFetchAllOpenConversationForUser:(long long)a0 inbox:(int)a1;
- (void)didStartFetchAllOpenConversationForUser:(long long)a0 inbox:(int)a1;
- (id)generateIMCloudMessageBodyWithPBNMessageBody:(id)a0;
- (id)generateIMCloudP2PMessageWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

@class NSString, BDECIMClientConfig;
@protocol BDECIMCloudMessageSenderDelegate, BDECIMCloudPullerStatusChangeObserverDelegate, BDECIMCloudIMStatisticDelegate, BDECIMCloudAppMessageInsertPluginDelegate, BDECIMCloudChangeObserverDelegate;

@interface BDECIMCloudCoreBridgeManager : NSObject <TIMXPullerStatusChangeObserverDelegate, TIMXOChangeObserverDelegate, TIMXOMessageSenderDelegate, BDECIMCloudCoreBridgeManagerInterface>

@property (retain, nonatomic) BDECIMClientConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BDECIMCloudPullerStatusChangeObserverDelegate> observerDelegate;
@property (weak, nonatomic) id<BDECIMCloudIMStatisticDelegate> statisticDelegate;
@property (weak, nonatomic) id<BDECIMCloudAppMessageInsertPluginDelegate> pluginDelegate;
@property (weak, nonatomic) id<BDECIMCloudChangeObserverDelegate> changeDelegate;
@property (weak, nonatomic) id<BDECIMCloudMessageSenderDelegate> messageSenderDelegate;

+ (void)removeAllIMFileWithAppID:(id)a0 userID:(long long)a1 businessID:(id)a2;
+ (BOOL)removeAllNewUnreadModelWithCustomBizID:(id)a0;

- (void)newP2PMessageNotifyConversation:(id)a0 message:(id)a1;
- (void)removeObserverWithIdentifier:(id)a0;
- (void)removeTIMChangeObserverWithIdentifier:(id)a0;
- (void)removeTIMOMessageSenderObserverWithIdentifier:(id)a0;
- (id)addTIMOChangeWeakChangeObserver;
- (id)addTIMOMessageSenderWeakObserver;
- (long long)currentAccountID;
- (void)didInsertNewMessagesWithMessageIdentifiers:(id)a0 belongingConversationMap:(id)a1 reason:(unsigned long long)a2;
- (void)messageUpdated:(id)a0 inConversation:(id)a1;
- (void)conversationUpdated:(id)a0;
- (void)conversationDidDissolved:(id)a0;
- (void)processMessages:(id)a0;
- (BOOL)filterMessage:(id)a0 reason:(id)a1;
- (BOOL)filterMessage:(id)a0;
- (void)pullerInsertNewMessages:(id)a0 reason:(id)a1 context:(id)a2;
- (void)dealMessageWhenWebsocketArrive:(id)a0;
- (void)message:(id)a0 inConversation:(id)a1 didReceiveResponse:(id)a2 error:(id)a3;
- (void)messageUpdated:(id)a0 inConversation:(id)a1 reason:(long long)a2;
- (void)didInsertNewMessagesWithMessageIdentifiers:(id)a0 belongingConversationMap:(id)a1 reason:(unsigned long long)a2 context:(id)a3;
- (void)didStartInstallInitForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2;
- (void)didEndInstallInitForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2;
- (void)didStartPullForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2;
- (void)didReceiveTimestamp:(id)a0;
- (id)addWeakChangesObserverOnQueue:(id)a0;
- (void)didEndPullForUser:(long long)a0 inbox:(int)a1 pullerType:(long long)a2 error:(id)a3 hasMore:(BOOL)a4 userInfo:(id)a5;
- (id)generateIMCloudP2PMessageWithMessage:(id)a0;
- (id)generateIMCloudMessageBodyWithECDYPBNMessageBody:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end

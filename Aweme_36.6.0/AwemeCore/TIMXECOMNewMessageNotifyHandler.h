@class NSSet, NSString, TIMXSDKInstance, TIMXECOMGetUserMessageHandler;

@interface TIMXECOMNewMessageNotifyHandler : NSObject <TIMXECOMNewMessageNotifyProtocol> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) NSSet *notSupportMessageType;
@property (retain, nonatomic) TIMXECOMGetUserMessageHandler *getUserMessageHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)readInfoVersionFromStore;
- (long long)conversationVersionFromStore;
- (long long)cmdMessageIndexFromStore;
- (void)setConversationVersionToStore:(long long)a0;
- (void)setCmdMessageIndexToStore:(long long)a0;
- (void)setReadInfoVersionToStore:(long long)a0;
- (BOOL)hasInitSuccess;
- (id)initWithInbox:(int)a0 userID:(long long)a1 rootObject:(id)a2;
- (id)finalGetUserMessageHandler;
- (BOOL)isCommandMessage:(id)a0;
- (BOOL)canDealNewMessage;
- (BOOL)isNotSupportMessageWithNotify:(id)a0;
- (void)trackNewNotifyDiscontinuousWithLocalVersion:(long long)a0 currentVersion:(long long)a1 type:(long long)a2 reason:(id)a3 clientMessageID:(id)a4;
- (void)updatePullerCursorWithNotify:(id)a0 context:(id)a1;
- (void)dealCmdMessageWithNotify:(id)a0 conversationExtraMap:(id)a1 context:(id)a2;
- (void)dealConvMessageWithNotify:(id)a0 conversationExtraMap:(id)a1 context:(id)a2;
- (BOOL)dealReadInfoMessageWithNotify:(id)a0 conversationExtraMap:(id)a1 context:(id)a2;
- (void)notifyNewMessageWithResponse:(id)a0;
- (void).cxx_destruct;
- (long long)currentUserID;

@end

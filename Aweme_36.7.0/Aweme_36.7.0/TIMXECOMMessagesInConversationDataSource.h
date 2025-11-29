@class TIMXECOMMessageReadPollingHelper;

@interface TIMXECOMMessagesInConversationDataSource : TIMXOMessagesInConversationDataSource

@property (retain, nonatomic) TIMXECOMMessageReadPollingHelper *messsageReadPollingHelper;

- (id)initWithConversationID:(id)a0 fromTopMessage:(id)a1 options:(id)a2 delegate:(id)a3;
- (id)initWithRootObject:(id)a0 initialLocationFirstUnreadMessageForConversationId:(id)a1 unreadMentioned:(BOOL)a2 offset:(unsigned long long)a3 options:(id)a4 delegate:(id)a5;
- (void).cxx_destruct;

@end

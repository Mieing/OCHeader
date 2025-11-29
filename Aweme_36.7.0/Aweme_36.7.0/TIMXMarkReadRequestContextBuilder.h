@class TIMXMarkReadRequestContext;

@interface TIMXMarkReadRequestContextBuilder : NSObject

@property (retain, nonatomic) TIMXMarkReadRequestContext *context;

- (id)withConversation:(id)a0;
- (id)withConversationID:(id)a0;
- (id)withConversationShortID:(long long)a0;
- (id)withConversationType:(int)a0;
- (id)withServerMessageID:(long long)a0;
- (id)withReadIndex:(long long)a0;
- (id)withReadIndexV2:(long long)a0;
- (id)withReadBadgeCountDict:(id)a0;
- (id)withUnreadCount:(id)a0;
- (id)withTotalUnreadCount:(id)a0;
- (id)withMuteReadBadgeCountInfos:(id)a0;
- (id)withTotalUnreadCountMap:(id)a0;
- (id)withTicket:(id)a0;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end

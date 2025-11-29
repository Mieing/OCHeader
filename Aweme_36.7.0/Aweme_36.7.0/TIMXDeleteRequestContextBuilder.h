@class TIMXDeleteRequestContext;

@interface TIMXDeleteRequestContextBuilder : NSObject

@property (retain, nonatomic) TIMXDeleteRequestContext *context;

- (id)withConversation:(id)a0;
- (id)withConversationID:(id)a0;
- (id)withConversationShortID:(long long)a0;
- (id)withConversationType:(int)a0;
- (id)withLastIndex:(long long)a0;
- (id)withLastIndexV2:(long long)a0;
- (id)withBadgeCount:(int)a0;
- (id)withThreadBadgeCount:(int)a0;
- (id)withMuteBadgeCountInfos:(id)a0;
- (id)withDeleteAction:(int)a0;
- (id)withServerMessageID:(long long)a0;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end

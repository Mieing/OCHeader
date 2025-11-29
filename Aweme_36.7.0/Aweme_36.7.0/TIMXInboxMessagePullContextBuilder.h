@class TIMXInboxMessagePullContext;

@interface TIMXInboxMessagePullContextBuilder : NSObject

@property (retain, nonatomic) TIMXInboxMessagePullContext *context;

- (id)withDirection:(unsigned long long)a0;
- (id)withConversationID:(id)a0;
- (id)withAnchorMessageID:(id)a0;
- (id)withLimit:(unsigned long long)a0;
- (id)withIncludeInvisible:(BOOL)a0;
- (id)withInRange:(id)a0;
- (id)withSkipRanges:(id)a0;
- (id)withShouldContainBoundaryMessage:(BOOL)a0;
- (id)withPullMessageIndex:(long long)a0;
- (id)withPullReason:(id)a0;
- (void).cxx_destruct;
- (id)build;
- (id)initWithContext:(id)a0;
- (id)init;

@end

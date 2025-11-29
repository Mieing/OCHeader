@class TIMXMessageFetchContext;

@interface TIMXMessageFetchContextBuilder : NSObject

@property (retain, nonatomic) TIMXMessageFetchContext *context;

- (id)withContext:(id)a0;
- (id)withIndexV1:(long long)a0;
- (id)withIndexV2:(long long)a0;
- (id)withConversation:(id)a0;
- (id)withDirection:(unsigned long long)a0;
- (id)withMaxRecursiveCount:(long long)a0;
- (id)withMinIndexV2:(long long)a0;
- (id)withMaxIndexV2:(long long)a0;
- (id)withNextIndexV1:(long long)a0;
- (id)withReturnVisibleMsgs:(id)a0;
- (id)withReturnAllMsgs:(id)a0;
- (id)withResult:(id)a0;
- (id)withAllResult:(id)a0;
- (id)withCurrentRecursiveCount:(long long)a0;
- (id)withHasMore:(BOOL)a0;
- (id)withError:(id)a0;
- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)withReason:(id)a0;

@end

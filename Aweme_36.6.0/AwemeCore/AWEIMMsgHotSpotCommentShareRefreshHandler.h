@interface AWEIMMsgHotSpotCommentShareRefreshHandler : AWEIMMsgBaseRefreshHandler

+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;

- (id)initWithComponentCenter:(id)a0;
- (id)initWithConversationContext:(id)a0;
- (BOOL)supportRefreshMessage:(id)a0;
- (BOOL)supportRefreshStrategy:(unsigned long long)a0;
- (void)refrshResourceStateFor:(id)a0 forViewModels:(id)a1 strategy:(unsigned long long)a2;

@end

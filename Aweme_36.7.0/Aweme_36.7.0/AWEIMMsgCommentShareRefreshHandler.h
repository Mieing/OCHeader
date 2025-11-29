@interface AWEIMMsgCommentShareRefreshHandler : AWEIMMsgBaseRefreshHandler

+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
+ (id)getCommentShareModel:(id)a0;
+ (void)setCommentShareModel:(id)a0 uniqueId:(id)a1;

- (id)initWithComponentCenter:(id)a0;
- (id)initWithConversationContext:(id)a0;
- (BOOL)supportRefreshMessage:(id)a0;
- (BOOL)supportRefreshStrategy:(unsigned long long)a0;
- (void)refrshResourceStateFor:(id)a0 forViewModels:(id)a1 strategy:(unsigned long long)a2;
- (void)new_refrshResourceStateFor:(id)a0 forViewModels:(id)a1 strategy:(unsigned long long)a2;
- (void)old_refrshResourceStateFor:(id)a0 forViewModels:(id)a1 strategy:(unsigned long long)a2;

@end

@class AWEIMConversationContext, NSString;
@protocol AWEIMMessageListComponentCenter;

@interface AWEIMMsgWatchOnceTextRefreshHandler : AWEIMMsgBaseRefreshHandler <AWEIMMsgRefreshHandlerProtocol>

@property (nonatomic) unsigned long long requestInterval;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
+ (void)markMessageWatchOnceAlreadyConsumeWith:(id)a0 withConShortId:(id)a1;

- (BOOL)supportRefreshMessage:(id)a0;
- (BOOL)supportRefreshStrategy:(unsigned long long)a0;
- (void)refrshResourceStateFor:(id)a0 forViewModels:(id)a1 strategy:(unsigned long long)a2;

@end

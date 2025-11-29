@class AWEIMConversationContext, NSString;
@protocol AWEIMMessageListComponentCenter;

@interface AWEIMMsgShareH5RefreshHandler : AWEIMMsgBaseRefreshHandler <AWEIMMsgRefreshHandlerProtocol>

@property (nonatomic) unsigned long long requestInterval;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
+ (id)getTitle:(id)a0;
+ (void)setTitle:(id)a0 uniqueId:(id)a1;
+ (void)setCoverURL:(id)a0 uniqueId:(id)a1;
+ (void)setDesc:(id)a0 uniqueId:(id)a1;
+ (void)setUIExtra:(id)a0 uniqueId:(id)a1;
+ (id)getCoverURL:(id)a0;
+ (id)getDesc:(id)a0;
+ (void)setTitleColor:(id)a0 uniqueId:(id)a1;
+ (id)getTitleColor:(id)a0;
+ (void)setDescColor:(id)a0 uniqueId:(id)a1;
+ (id)getDescColor:(id)a0;
+ (id)getUIExtra:(id)a0;

- (BOOL)supportRefreshMessage:(id)a0;
- (BOOL)supportRefreshStrategy:(unsigned long long)a0;
- (void)refrshResourceStateFor:(id)a0 forViewModels:(id)a1 strategy:(unsigned long long)a2;

@end

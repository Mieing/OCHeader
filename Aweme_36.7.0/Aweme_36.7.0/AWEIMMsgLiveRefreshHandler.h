@class NSString, NSMutableDictionary, AWEIMConversationContext;
@protocol IESIMConversationProtocol, AWEIMMessageListComponentCenter;

@interface AWEIMMsgLiveRefreshHandler : AWEIMMsgBaseRefreshHandler <AWEIMMsgLiveRefreshMessage, AWEIMMsgRefreshHandlerProtocol>

@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long requestInterval;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;

+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;

- (id)initWithComponentCenter:(id)a0;
- (id)initWithConversationContext:(id)a0;
- (BOOL)supportRefreshMessage:(id)a0;
- (BOOL)supportRefreshStrategy:(unsigned long long)a0;
- (void)refrshResourceStateFor:(id)a0 forViewModels:(id)a1 strategy:(unsigned long long)a2;
- (void)updateLiveAnchorWithViewModel:(id)a0;
- (void)__updateLiveAnchrsWithViewModels:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end

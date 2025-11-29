@class AWEIMConversationContext, NSString;
@protocol AWEIMMessageListComponentCenter;

@interface AWEIMMsgBaseRefreshHandler : NSObject <AWEIMMsgRefreshHandlerProtocol>

@property (nonatomic) unsigned long long requestInterval;
@property (weak, nonatomic) id<AWEIMMessageListComponentCenter> componentCenter;
@property (weak, nonatomic) AWEIMConversationContext *conversationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportRefresh;
+ (void)setLastRefreshTimestamp:(double)a0 uniqueId:(id)a1;
+ (long long)getRefreshHandlerType;
+ (double)getLastRefreshTimestamp:(id)a0;

- (id)initWithComponentCenter:(id)a0;
- (id)initWithConversationContext:(id)a0;
- (BOOL)supportRefreshMessage:(id)a0;
- (BOOL)supportRefreshStrategy:(unsigned long long)a0;
- (void)refrshResourceStateFor:(id)a0 forViewModels:(id)a1 strategy:(unsigned long long)a2;
- (BOOL)isRequestIntervalNotReached:(id)a0;
- (void).cxx_destruct;

@end

@class NSDictionary, AWEIMMessageConversation, AWEIMMessageListConfig;

@interface AWEIMMessageListContext : NSObject

@property (retain, nonatomic) NSDictionary *liveCustomExtra;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMMessageListConfig *config;

+ (id)contextForCid:(id)a0;
+ (id)topContext;
+ (id)s_contextLock;
+ (id)s_tableForContext;

- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end

@class NSDictionary, AWEIMMessageConversation, AWEIMConversationContext;

@interface AWEIMStrategyConfigContext : NSObject

@property (nonatomic) double parseVariablesCost;
@property (nonatomic) unsigned long long sceneType;
@property (nonatomic) unsigned long long diffSceneType;
@property (copy, nonatomic) NSDictionary *decisionDict;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) AWEIMConversationContext *convContext;

- (void).cxx_destruct;

@end

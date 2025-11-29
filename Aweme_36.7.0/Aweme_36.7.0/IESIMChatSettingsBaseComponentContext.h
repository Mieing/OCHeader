@class AWEIMMessageConversation;
@protocol IESIMConversationProtocol;

@interface IESIMChatSettingsBaseComponentContext : AWEIMComponentContext

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) id businessData;

- (void).cxx_destruct;

@end

@class AWEIMMessageBaseViewController, AWEIMMessageConversation, AWEUserModel;
@protocol IESIMConversationProtocol;

@interface AWELocoalGifCreaterContext : NSObject

@property (weak, nonatomic) id<IESIMConversationProtocol> con;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (weak, nonatomic) AWEUserModel *user;
@property (weak, nonatomic) AWEIMMessageBaseViewController *vcParent;

- (void).cxx_destruct;

@end

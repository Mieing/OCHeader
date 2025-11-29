@class AWEIMChatModel, AWEIMPushEventContext, AWEIMPushMetaInfo;
@protocol IESIMConversationProtocol, IESIMMessageProtocol;

@interface AWEIMPushConditionContext : NSObject {
    long long _p_conOnceToken;
    long long _p_chatOnceToken;
    long long _p_msgOnceToken;
}

@property (retain) AWEIMPushEventContext *eventContext;
@property (retain) AWEIMPushMetaInfo *info;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) AWEIMChatModel *chat;
@property (retain, nonatomic) id<IESIMMessageProtocol> msg;

- (void).cxx_destruct;
- (id)description;

@end

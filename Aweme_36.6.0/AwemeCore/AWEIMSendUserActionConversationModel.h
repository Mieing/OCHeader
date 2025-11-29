@class NSDictionary, AWEIMMessageConversation, AWEUserModel;

@interface AWEIMSendUserActionConversationModel : NSObject

@property (nonatomic) long long actionType;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) AWEUserModel *fullDetailUser;
@property (nonatomic) long long source;

- (void).cxx_destruct;

@end

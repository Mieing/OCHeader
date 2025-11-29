@class NSString, NSDictionary, AWEIMMessage;
@protocol IESIMConversationProtocol;

@interface AWEIMExchangeCamaraRouterContext : NSObject

@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *entrance;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (nonatomic) BOOL isFromIMDetail;

- (id)initWithConversationId:(id)a0 enterFrom:(id)a1 entrance:(id)a2;
- (void).cxx_destruct;

@end

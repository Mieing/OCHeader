@class NSString, NSDictionary;
@protocol IESIMConversationProtocol, IESIMMessageProtocol;

@interface IESIMHunterDynamicPatchModel : NSObject

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *serverData;
@property (copy, nonatomic) NSDictionary *clientData;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<IESIMMessageProtocol> message;
@property (retain, nonatomic) NSString *messageID;

- (void).cxx_destruct;

@end

@class NSString, NSDictionary;
@protocol IESIMConversationProtocol, IESIMMessageProtocol;

@interface IESIMOpenHunterContainerParamModel : NSObject

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *serverData;
@property (copy, nonatomic) NSDictionary *clientData;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (copy, nonatomic) NSDictionary *popupConfig;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<IESIMMessageProtocol> message;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSString *targetMemberUid;

- (void).cxx_destruct;

@end

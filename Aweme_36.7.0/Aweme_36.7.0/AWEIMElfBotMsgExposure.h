@class NSString;
@protocol IESIMConversationProtocol, AWEIMMessageProtocol;

@interface AWEIMElfBotMsgExposure : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) id<IESIMConversationProtocol> con;
@property (retain, nonatomic) id<AWEIMMessageProtocol> message;
@property (nonatomic) long long identifier;

- (void).cxx_destruct;

@end

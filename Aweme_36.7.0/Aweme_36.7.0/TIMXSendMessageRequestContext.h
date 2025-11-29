@class NSString, NSDictionary, NSData;
@protocol TIMXMessageModelProtocol;

@interface TIMXSendMessageRequestContext : NSObject

@property (retain, nonatomic) id<TIMXMessageModelProtocol> message;
@property (nonatomic) int conversationType;
@property (nonatomic) long long conversationShortID;
@property (retain, nonatomic) NSString *conversationID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSDictionary *clientExt;
@property (nonatomic) long long parentConvShortId;
@property (nonatomic) long long rootServerMessageId;
@property (retain, nonatomic) NSString *rootClientMessageId;
@property (retain, nonatomic) NSData *aiContext;
@property (retain, nonatomic) NSString *identityToken;
@property (nonatomic) long long subConversationShortId;

- (void).cxx_destruct;

@end

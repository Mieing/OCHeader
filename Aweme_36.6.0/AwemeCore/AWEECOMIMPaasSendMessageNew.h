@class NSString, NSDictionary, BDECPigeonReferMessageInfo;

@interface AWEECOMIMPaasSendMessageNew : NSObject <AWEECOMIMPaasSendMessageProtocol>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *bizConversationID;
@property (copy, nonatomic) NSString *messageType;
@property (nonatomic) long long roleType;
@property (retain) NSDictionary *bizExt;
@property (copy, nonatomic) NSString *bizRole;
@property (nonatomic) BOOL isSaveDB;
@property (nonatomic) BOOL skipSendAndMarkFailed;
@property (copy) NSString *groupChatIdempotentId;
@property (copy) NSString *pigeonBizType;
@property (nonatomic) int inbox;
@property (retain) BDECPigeonReferMessageInfo *referMessageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)convertToPigeonSendMessage;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString, BaseResponse;

@interface BakChatUploadMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *bakChatClientId;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) unsigned int bakChatSvrId;

+ (void)initialize;

@end

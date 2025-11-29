@class NSString, BaseResponse;

@interface SendChatroomMsgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *sendNotice;

+ (void)initialize;

@end

@class NSString, GameLifeMsgExtInfo, BaseResponse;

@interface GetChatSessionIdResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) GameLifeMsgExtInfo *msgExtInfo;

+ (void)initialize;

@end

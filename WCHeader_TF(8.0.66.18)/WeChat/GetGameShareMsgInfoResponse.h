@class NSString, LiteAppBizData, BaseResponse;

@interface GetGameShareMsgInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *gameMsgId;
@property (retain, nonatomic) LiteAppBizData *liteAppBizData;

+ (void)initialize;

@end

@class NSString, MsgSessionInfo, BaseResponse;

@interface GetMsgSessionInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MsgSessionInfo *sessionInfo;
@property (retain, nonatomic) NSString *liteappMinVersion;

+ (void)initialize;

@end

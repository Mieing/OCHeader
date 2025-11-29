@class NSString, BaseResponse;

@interface CgiPayCheckResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retcode;
@property (retain, nonatomic) NSString *retmsg;

+ (void)initialize;

@end

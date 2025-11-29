@class NSString, BaseResponse;

@interface AACloseNotifyRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *msgxml;

+ (void)initialize;

@end

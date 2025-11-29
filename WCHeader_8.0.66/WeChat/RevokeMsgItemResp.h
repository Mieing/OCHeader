@class BaseResponse;

@interface RevokeMsgItemResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long newmsgid;

+ (void)initialize;

@end

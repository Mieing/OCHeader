@class BaseResponse;

@interface OpenForwardMsgViewSpamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isBlocked;

+ (void)initialize;

@end

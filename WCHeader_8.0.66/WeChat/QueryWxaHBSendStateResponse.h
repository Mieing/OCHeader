@class BaseResponse;

@interface QueryWxaHBSendStateResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int state;

+ (void)initialize;

@end

@class OpenIMKefuContext, BaseResponse;

@interface AddOpenIMKefuContactResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) OpenIMKefuContext *context;

+ (void)initialize;

@end

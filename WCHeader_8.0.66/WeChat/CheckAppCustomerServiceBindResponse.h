@class BaseResponse;

@interface CheckAppCustomerServiceBindResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int bindState;

+ (void)initialize;

@end

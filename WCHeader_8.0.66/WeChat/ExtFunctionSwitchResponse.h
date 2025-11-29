@class BaseResponse;

@interface ExtFunctionSwitchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int extFunctionSwitch;

+ (void)initialize;

@end

@class BaseResponse;

@interface SwitchPushMailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int switchValue;

+ (void)initialize;

@end

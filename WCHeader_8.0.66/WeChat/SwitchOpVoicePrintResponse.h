@class BaseResponse;

@interface SwitchOpVoicePrintResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int userSwitch;
@property (nonatomic) unsigned int userStatus;

+ (void)initialize;

@end

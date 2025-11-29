@class BaseResponse;

@interface VoiceOperateSwitchMchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL isOpen;

+ (void)initialize;

@end

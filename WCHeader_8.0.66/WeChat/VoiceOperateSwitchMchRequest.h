@class BaseRequest;

@interface VoiceOperateSwitchMchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned long long shopId;

+ (void)initialize;

@end

@class BaseRequest;

@interface VoIPMtGetAuthCodeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int supportMultiIdc;

+ (void)initialize;

@end

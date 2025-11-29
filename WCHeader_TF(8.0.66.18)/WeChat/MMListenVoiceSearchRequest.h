@class BaseRequest, NSString;

@interface MMListenVoiceSearchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *voiceText;

+ (void)initialize;

@end

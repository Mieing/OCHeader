@class BaseRequest, NSString;

@interface GetVoiceTransResRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *voiceId;

+ (void)initialize;

@end

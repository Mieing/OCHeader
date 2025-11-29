@class BaseRequest, NSData;

@interface VoiceTextSimplifyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *voiceText;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end

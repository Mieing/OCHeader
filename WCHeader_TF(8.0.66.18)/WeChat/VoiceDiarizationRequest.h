@class BaseRequest, NSString;

@interface VoiceDiarizationRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *voiceId;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end

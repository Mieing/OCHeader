@class BaseRequest, NSData, MMListenAudioPushRequest_ClientStatus;

@interface MMListenAudioPushRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) MMListenAudioPushRequest_ClientStatus *clientStatus;

+ (void)initialize;

@end

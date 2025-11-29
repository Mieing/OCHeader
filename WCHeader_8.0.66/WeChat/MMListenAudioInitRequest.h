@class BaseRequest, NSData;

@interface MMListenAudioInitRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end

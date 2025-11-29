@class BaseRequest, NSString, NSData;

@interface VoiceRecognizeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *voiceId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *voiceData;
@property (nonatomic) unsigned int fileEncodeType;
@property (nonatomic) BOOL isEnd;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *extraData;

+ (void)initialize;

@end

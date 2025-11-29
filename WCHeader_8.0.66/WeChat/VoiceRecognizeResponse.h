@class NSString, NSData, BaseResponse;

@interface VoiceRecognizeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *voiceId;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSString *resultText;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int interval;
@property (nonatomic) unsigned int maxPacketSize;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int cgiTimeout;
@property (nonatomic) unsigned int cgiRetryCount;
@property (nonatomic) BOOL needSimplify;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *cancelButtonText;

+ (void)initialize;

@end

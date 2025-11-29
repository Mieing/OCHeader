@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface DownloadVoiceResponse : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int voiceLength;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) unsigned int endFlag;
@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int cancelFlag;
@property (nonatomic) unsigned long long newMsgId;

+ (void)initialize;

@end

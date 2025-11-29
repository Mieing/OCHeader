@class BaseResponse;

@interface FinderGetTranscribeParamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int encodeType;
@property (nonatomic) unsigned int sampleRate;
@property (nonatomic) unsigned int channelCount;

+ (void)initialize;

@end

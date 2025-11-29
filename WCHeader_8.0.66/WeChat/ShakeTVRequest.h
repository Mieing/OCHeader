@class BaseRequest, SKBuiltinBuffer_t;

@interface ShakeTVRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) unsigned int dataId;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) float voiceLen;
@property (nonatomic) unsigned int netType;
@property (nonatomic) unsigned int sdkVersion;
@property (nonatomic) float longtitude;
@property (nonatomic) float latitude;

+ (void)initialize;

@end

@class BaseRequest, SKBuiltinBuffer_t;

@interface ShakeMusicRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;
@property (nonatomic) unsigned int dataId;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) float voiceLen;
@property (nonatomic) unsigned int netType;
@property (nonatomic) unsigned int sdkVersion;
@property (nonatomic) float longtitude;
@property (nonatomic) float latitude;
@property (nonatomic) unsigned int isOutsideGfw;
@property (nonatomic) unsigned int shakeMusicGlobalSwitch;

+ (void)initialize;

@end

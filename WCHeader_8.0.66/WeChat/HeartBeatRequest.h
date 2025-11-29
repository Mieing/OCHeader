@class BaseRequest, SKBuiltinBuffer_t;

@interface HeartBeatRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int timeStamp;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (retain, nonatomic) SKBuiltinBuffer_t *blueToothBroadCastContent;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end

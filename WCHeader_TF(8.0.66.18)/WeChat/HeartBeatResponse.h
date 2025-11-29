@class SKBuiltinBuffer_t, BaseResponse;

@interface HeartBeatResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int nextTime;
@property (nonatomic) unsigned int selector;
@property (retain, nonatomic) SKBuiltinBuffer_t *blueToothBroadCastContent;

+ (void)initialize;

@end

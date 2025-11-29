@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface PushLoginURLResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) SKBuiltinBuffer_t *notifyKey;
@property (nonatomic) unsigned int checkTime;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) NSString *blueToothBroadCastUuid;
@property (retain, nonatomic) SKBuiltinBuffer_t *blueToothBroadCastContent;

+ (void)initialize;

@end

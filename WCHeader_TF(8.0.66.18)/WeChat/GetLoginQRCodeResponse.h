@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface GetLoginQRCodeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *qrcode;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned int checkTime;
@property (retain, nonatomic) SKBuiltinBuffer_t *notifyKey;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) NSString *blueToothBroadCastUuid;
@property (retain, nonatomic) SKBuiltinBuffer_t *blueToothBroadCastContent;
@property (retain, nonatomic) NSString *loginUrl;

+ (void)initialize;

@end

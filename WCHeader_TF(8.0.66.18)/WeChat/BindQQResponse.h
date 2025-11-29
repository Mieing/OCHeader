@class BaseResponse, NSString, SKBuiltinString_t, SafeDeviceList, SKBuiltinBuffer_t;

@interface BindQQResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *imgSid;
@property (retain, nonatomic) SKBuiltinBuffer_t *imgBuf;
@property (nonatomic) unsigned int pushMailStatus;
@property (nonatomic) unsigned int privateMsgStatus;
@property (retain, nonatomic) NSString *microBlogName;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *qqmailSkey;
@property (retain, nonatomic) SKBuiltinString_t *imgEncryptKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *a2Key;
@property (retain, nonatomic) SKBuiltinBuffer_t *ksid;
@property (retain, nonatomic) SafeDeviceList *safeDeviceList;
@property (nonatomic) unsigned int safeDevice;
@property (retain, nonatomic) SKBuiltinBuffer_t *wtloginRspBuff;

+ (void)initialize;

@end

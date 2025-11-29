@class NSString, SKBuiltinBuffer_t;

@interface WTLoginImgReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *imgSid;
@property (retain, nonatomic) NSString *imgCode;
@property (retain, nonatomic) NSString *imgEncryptKey;
@property (retain, nonatomic) SKBuiltinBuffer_t *ksid;

+ (void)initialize;

@end

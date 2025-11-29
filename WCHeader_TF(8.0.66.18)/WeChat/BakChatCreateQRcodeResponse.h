@class NSString, SKBuiltinBuffer_t;

@interface BakChatCreateQRcodeResponse : WXPBGeneratedMessage

@property (nonatomic) unsigned int ret;
@property (retain, nonatomic) SKBuiltinBuffer_t *qrcodeBuffer;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (retain, nonatomic) SKBuiltinBuffer_t *key;
@property (retain, nonatomic) NSString *hello;
@property (retain, nonatomic) NSString *ok;
@property (nonatomic) unsigned int encryFlag;
@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) NSString *ticket;

+ (void)initialize;

@end

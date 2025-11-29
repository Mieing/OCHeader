@class NSString, SKBuiltinBuffer_t;

@interface BakChatCreateQRcodeOfflineResponse : WXPBGeneratedMessage

@property (nonatomic) unsigned int ret;
@property (retain, nonatomic) SKBuiltinBuffer_t *qrcodeBuffer;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (nonatomic) unsigned int encryFlag;
@property (retain, nonatomic) NSString *id;

+ (void)initialize;

@end

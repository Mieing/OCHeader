@class NSString, SKBuiltinString_t, SKBuiltinBuffer_t;

@interface MicroMsgRequestNew : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinString_t *toUserName;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int clientMsgId;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned int ctrlBit;
@property (retain, nonatomic) SKBuiltinBuffer_t *encryptedContent;
@property (retain, nonatomic) NSString *sendMsgTicket;

+ (void)initialize;

@end

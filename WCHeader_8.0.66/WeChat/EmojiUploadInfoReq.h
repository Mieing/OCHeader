@class NSString, SKBuiltinBuffer_t;

@interface EmojiUploadInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *md5;
@property (nonatomic) int startPos;
@property (nonatomic) int totalLen;
@property (retain, nonatomic) SKBuiltinBuffer_t *emojiBuffer;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *toUserName;
@property (retain, nonatomic) NSString *externXml;
@property (retain, nonatomic) NSString *report;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) int newXmlFlag;
@property (retain, nonatomic) NSString *sendMsgTicket;
@property (retain, nonatomic) NSString *extCommInfoXml;

+ (void)initialize;

@end

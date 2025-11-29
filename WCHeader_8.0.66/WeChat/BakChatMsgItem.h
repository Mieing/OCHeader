@class NSString, SKBuiltinString_t, NSMutableArray, SKBuiltinBuffer_t;

@interface BakChatMsgItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) SKBuiltinString_t *fromUserName;
@property (retain, nonatomic) SKBuiltinString_t *toUserName;
@property (retain, nonatomic) SKBuiltinString_t *content;
@property (nonatomic) unsigned int msgStatus;
@property (nonatomic) unsigned int clientMsgTime;
@property (retain, nonatomic) NSString *msgSource;
@property (nonatomic) unsigned int msgId;
@property (nonatomic) unsigned int mediaIdCount;
@property (retain, nonatomic) NSMutableArray *mediaId;
@property (retain, nonatomic) NSMutableArray *mediaType;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;
@property (nonatomic) unsigned int bufferLength;
@property (nonatomic) unsigned int bufferType;
@property (nonatomic) unsigned long long newMsgId;
@property (nonatomic) unsigned int sequentId;
@property (nonatomic) long long clientMsgMillTime;
@property (nonatomic) unsigned int msgFlag;

+ (void)initialize;

@end

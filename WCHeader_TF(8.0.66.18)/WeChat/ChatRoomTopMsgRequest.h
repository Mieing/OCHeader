@class BaseRequest, NSString, SKBuiltinBuffer_t;

@interface ChatRoomTopMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) unsigned int op;
@property (nonatomic) unsigned long long newMsgId;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *msgSummary;
@property (retain, nonatomic) NSString *msgUserName;
@property (retain, nonatomic) SKBuiltinBuffer_t *clientBuf;
@property (nonatomic) unsigned int msgCreateTime;
@property (retain, nonatomic) NSString *msgStrId;

+ (void)initialize;

@end

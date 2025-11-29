@class SKBuiltinString_t;

@interface AddMsgDigest : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinString_t *chatRoomId;
@property (nonatomic) long long newMsgId;
@property (nonatomic) unsigned int msgSeq;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int unDeliverCount;
@property (retain, nonatomic) SKBuiltinString_t *digestContent;
@property (nonatomic) unsigned int isAted;
@property (nonatomic) int msgType;

+ (void)initialize;

@end

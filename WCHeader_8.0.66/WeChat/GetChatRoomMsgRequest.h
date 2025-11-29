@class SKBuiltinString_t;

@interface GetChatRoomMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) SKBuiltinString_t *chatroomId;
@property (nonatomic) unsigned int msgSeq;
@property (nonatomic) unsigned int needCount;
@property (nonatomic) unsigned int upDownFlag;
@property (nonatomic) unsigned int clearFlag;
@property (nonatomic) unsigned int filterSeq;
@property (nonatomic) unsigned int webSeqBlockFlag;

+ (void)initialize;

@end

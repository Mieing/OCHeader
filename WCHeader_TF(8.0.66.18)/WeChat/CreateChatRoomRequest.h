@class BaseRequest, SKBuiltinString_t, NSMutableArray, SKBuiltinBuffer_t;

@interface CreateChatRoomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SKBuiltinString_t *topic;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) SKBuiltinBuffer_t *extBuffer;

+ (void)initialize;

@end

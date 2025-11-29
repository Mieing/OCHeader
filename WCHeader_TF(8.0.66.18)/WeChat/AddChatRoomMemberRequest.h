@class BaseRequest, SKBuiltinString_t, NSString, HistoryInfo, NSMutableArray;

@interface AddChatRoomMemberRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (retain, nonatomic) SKBuiltinString_t *chatRoomName;
@property (nonatomic) unsigned int lastRoomMsgTimeStamp;
@property (retain, nonatomic) NSString *accessApplicationDesp;
@property (retain, nonatomic) HistoryInfo *history;

+ (void)initialize;

@end

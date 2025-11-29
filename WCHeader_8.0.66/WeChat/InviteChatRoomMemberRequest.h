@class BaseRequest, SKBuiltinString_t, NSString, HistoryInfo, NSMutableArray;

@interface InviteChatRoomMemberRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (retain, nonatomic) SKBuiltinString_t *chatRoomName;
@property (nonatomic) unsigned int inviteScene;
@property (retain, nonatomic) NSString *accessApprovalTicket;
@property (retain, nonatomic) HistoryInfo *history;

+ (void)initialize;

@end

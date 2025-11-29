@class JumpInfo, NSString, ChatroomNotice, AdminInfo, NSMutableArray;

@interface ChatroomData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatroomName;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSString *chatroomIcon;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) AdminInfo *adminInfo;
@property (nonatomic) unsigned int chatroomType;
@property (nonatomic) BOOL isPrivate;
@property (retain, nonatomic) NSString *announcement;
@property (nonatomic) unsigned int userChatroomRelation;
@property (nonatomic) unsigned int roomMemberNum;
@property (retain, nonatomic) NSMutableArray *ruleList;
@property (nonatomic) BOOL canJoin;
@property (nonatomic) BOOL canOnlooker;
@property (nonatomic) BOOL canChat;
@property (retain, nonatomic) NSString *applicationQuestion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) JumpInfo *applyJumpInfo;
@property (retain, nonatomic) JumpInfo *chatroomProfileJumpInfo;
@property (nonatomic) unsigned int kickOutType;
@property (retain, nonatomic) JumpInfo *chatroomMemberJumpInfo;
@property (retain, nonatomic) ChatroomNotice *notice;
@property (nonatomic) BOOL topChatroom;
@property (retain, nonatomic) NSMutableArray *chatroomTagList;
@property (nonatomic) unsigned int allowUserNum;
@property (retain, nonatomic) NSString *reportStr;

+ (void)initialize;

@end

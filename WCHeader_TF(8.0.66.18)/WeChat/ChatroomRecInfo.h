@class ChatroomMsgPack, ChatroomData, ChattingInfo, NSMutableArray;

@interface ChatroomRecInfo : WXPBGeneratedMessage

@property (retain, nonatomic) ChatroomData *chatroomData;
@property (nonatomic) unsigned long long basicUpdateTime;
@property (retain, nonatomic) ChattingInfo *chatingDes;
@property (nonatomic) unsigned int userChattingCount;
@property (retain, nonatomic) ChatroomMsgPack *lastChatroomMsg;
@property (retain, nonatomic) NSMutableArray *chosenChatroomMsg;
@property (retain, nonatomic) NSMutableArray *bulletMsgList;

+ (void)initialize;

@end

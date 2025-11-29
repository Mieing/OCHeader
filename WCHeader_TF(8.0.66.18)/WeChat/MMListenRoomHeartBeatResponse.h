@class NSData, MMListenChatRoomPlaylistContent, NSMutableArray, BaseResponse;

@interface MMListenRoomHeartBeatResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *cookie;
@property (retain, nonatomic) NSMutableArray *messageList;
@property (retain, nonatomic) NSMutableArray *onlineFriendList;
@property (nonatomic) unsigned int onlineMemberCount;
@property (retain, nonatomic) NSMutableArray *onlineMemberList;
@property (retain, nonatomic) MMListenChatRoomPlaylistContent *chatRoomPlaylistContent;
@property (nonatomic) unsigned int timeGapS;
@property (nonatomic) BOOL isClose;

+ (void)initialize;

@end

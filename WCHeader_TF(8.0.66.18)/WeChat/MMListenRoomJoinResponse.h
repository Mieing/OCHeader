@class MMListenMusicChatRoomInfo, NSString, MMListenUserInfo, NSData, MMListenChatRoomPlaylistContent, NSMutableArray, BaseResponse;

@interface MMListenRoomJoinResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *cookie;
@property (retain, nonatomic) NSMutableArray *messageList;
@property (nonatomic) unsigned int onlineMemberCount;
@property (retain, nonatomic) NSMutableArray *onlineMemberList;
@property (retain, nonatomic) MMListenChatRoomPlaylistContent *chatRoomPlaylistContent;
@property (retain, nonatomic) MMListenMusicChatRoomInfo *musicChatRoomInfo;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) MMListenUserInfo *ecryptedUserInfo;

+ (void)initialize;

@end

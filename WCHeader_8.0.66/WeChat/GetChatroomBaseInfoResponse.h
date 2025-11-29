@class Background, ChatroomJumpInfo, ChatroomEnterInfo, RealtimeControlInfo, BaseResponse, NSMutableArray, FirstEnterNotify, ChatroomButton, MsgBaseInfo, ChatroomData, ChatroomPreloadInfo, ChatroomUserData, ChannelInfo, ChatroomExternInfo;

@interface GetChatroomBaseInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ChatroomUserData *currentUserData;
@property (retain, nonatomic) ChatroomData *currentChatroomData;
@property (retain, nonatomic) ChatroomButton *chatroomButton;
@property (retain, nonatomic) RealtimeControlInfo *controlInfo;
@property (retain, nonatomic) ChatroomPreloadInfo *preloadInfo;
@property (retain, nonatomic) NSMutableArray *robotInfoList;
@property (retain, nonatomic) ChatroomJumpInfo *jumpInfo;
@property (retain, nonatomic) ChatroomExternInfo *externInfo;
@property (retain, nonatomic) ChannelInfo *channelInfo;
@property (retain, nonatomic) MsgBaseInfo *msgBaseInfo;
@property (retain, nonatomic) FirstEnterNotify *firstEnterNotify;
@property (retain, nonatomic) ChatroomEnterInfo *chatroomEnterInfo;
@property (retain, nonatomic) Background *background;

+ (void)initialize;

@end

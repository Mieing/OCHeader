@class BaseResponse, ChatroomJumpDetail, NSMutableArray, JumpInfo;

@interface GetCanJoinChatroomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *chatroomInfoList;
@property (retain, nonatomic) JumpInfo *createJumpInfo;
@property (retain, nonatomic) NSMutableArray *banActionList;
@property (nonatomic) BOOL showEntrance;
@property (retain, nonatomic) JumpInfo *findMoreJumpInfo;
@property (retain, nonatomic) ChatroomJumpDetail *findMoreChatroomJumpInfo;
@property (retain, nonatomic) ChatroomJumpDetail *chatroomRankJumpInfo;

+ (void)initialize;

@end

@class NSMutableArray, BaseResponse;

@interface GetTalkRoomMemberResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int micSeq;
@property (nonatomic) int memberNum;
@property (retain, nonatomic) NSMutableArray *memberList;

+ (void)initialize;

@end

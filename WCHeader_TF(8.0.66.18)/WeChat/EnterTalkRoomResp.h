@class NSMutableArray, BaseResponse;

@interface EnterTalkRoomResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (nonatomic) int micSeq;
@property (nonatomic) int memberNum;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (nonatomic) int myRoomMemberId;
@property (nonatomic) int addrCount;
@property (retain, nonatomic) NSMutableArray *addrList;

+ (void)initialize;

@end

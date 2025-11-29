@class NSMutableArray, BaseResponse;

@interface LbsRoomMemberResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *memberList;

+ (void)initialize;

@end

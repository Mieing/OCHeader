@class NSMutableArray, BaseResponse;

@interface GetChatroomMemberInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *userDataList;

+ (void)initialize;

@end

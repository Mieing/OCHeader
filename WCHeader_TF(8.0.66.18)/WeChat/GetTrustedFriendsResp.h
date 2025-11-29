@class NSMutableArray, BaseResponse;

@interface GetTrustedFriendsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contacts;
@property (nonatomic) unsigned int trustedFriendMaxCnt;

+ (void)initialize;

@end

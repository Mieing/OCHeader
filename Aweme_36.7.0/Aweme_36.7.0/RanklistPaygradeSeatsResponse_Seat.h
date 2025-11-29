@class RanklistPaygradeSeatsResponse_UserInfo;

@interface RanklistPaygradeSeatsResponse_Seat : IESLivePBBaseMessage

@property (retain, nonatomic) RanklistPaygradeSeatsResponse_UserInfo *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) long long score;
@property (nonatomic) long long rank;
@property (nonatomic) BOOL isHidden;

+ (id)descriptor;

@end

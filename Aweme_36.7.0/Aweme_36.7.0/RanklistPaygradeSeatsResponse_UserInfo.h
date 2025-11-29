@class NSString, HTSLiveImage;

@interface RanklistPaygradeSeatsResponse_UserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) long long level;
@property (retain, nonatomic) HTSLiveImage *badge;
@property (nonatomic) BOOL hasBadge;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end

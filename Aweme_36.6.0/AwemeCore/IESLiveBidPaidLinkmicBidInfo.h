@class NSString, HTSLiveImage;

@interface IESLiveBidPaidLinkmicBidInfo : IESLivePBBaseMessage

@property (nonatomic) long long bidPrice;
@property (nonatomic) long long bidUsersUv;
@property (nonatomic) long long serverLeftTime;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) HTSLiveImage *userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *secUserId;

+ (id)descriptor;

@end

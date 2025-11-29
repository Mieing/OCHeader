@class NSString, HTSLiveImage;

@interface IESLiveBidPaidLinkmicDealInfo : IESLivePBBaseMessage

@property (nonatomic) long long winPrice;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *userId;
@property (retain, nonatomic) HTSLiveImage *userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (copy, nonatomic) NSString *secUserId;

+ (id)descriptor;

@end

@class NSString, HTSLiveImage;

@interface HTSLiveDesireContributorInfo_Contributor : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *secUserId;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end

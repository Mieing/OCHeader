@class NSString, HTSLiveImage;

@interface HTSLiveRecentPurchasedUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *avatarUri;
@property (retain, nonatomic) HTSLiveImage *avatar;
@property (nonatomic) BOOL hasAvatar;
@property (nonatomic) long long episodes;

+ (id)descriptor;

@end

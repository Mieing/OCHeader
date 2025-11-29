@class NSString, HTSLiveImage;

@interface HTSLiveClubTaskUserInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *userAvatar;
@property (nonatomic) BOOL hasUserAvatar;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long intimacy;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) long long rank;

+ (id)descriptor;

@end

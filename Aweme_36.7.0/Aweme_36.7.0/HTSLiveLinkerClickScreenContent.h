@class NSString, HTSLiveImage;

@interface HTSLiveLinkerClickScreenContent : IESLivePBBaseMessage

@property (nonatomic) long long deviceWidth;
@property (nonatomic) long long deviceHeight;
@property (nonatomic) long long pointX;
@property (nonatomic) long long pointY;
@property (nonatomic) long long fromUserId;
@property (retain, nonatomic) HTSLiveImage *avatarMedium;
@property (nonatomic) BOOL hasAvatarMedium;
@property (copy, nonatomic) NSString *fromUserOpenId;

+ (id)descriptor;

@end

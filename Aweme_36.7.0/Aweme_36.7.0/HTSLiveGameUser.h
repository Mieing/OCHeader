@class NSString, HTSLiveGameImage;

@interface HTSLiveGameUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *openId;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveGameImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (copy, nonatomic) NSString *secUserId;

+ (id)descriptor;

@end

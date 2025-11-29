@class NSString, HTSLiveImage;

@interface GuideMedia : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *mediaURL;
@property (copy, nonatomic) NSString *thumbURL;
@property (nonatomic) long long updateTime;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatarImage;
@property (nonatomic) BOOL hasAvatarImage;

+ (id)descriptor;

@end

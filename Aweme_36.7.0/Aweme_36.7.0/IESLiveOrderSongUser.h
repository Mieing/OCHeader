@class NSString, HTSLiveImage;

@interface IESLiveOrderSongUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;

+ (id)descriptor;

@end

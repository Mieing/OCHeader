@class NSString, HTSLiveImage;

@interface IESLiveRealTimeChorusSettingUser : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (nonatomic) BOOL isSelected;

+ (id)descriptor;

@end

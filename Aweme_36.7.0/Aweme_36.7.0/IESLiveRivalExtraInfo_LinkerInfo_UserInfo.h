@class NSString, HTSLiveImage;

@interface IESLiveRivalExtraInfo_LinkerInfo_UserInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (copy, nonatomic) NSString *userIdStr;
@property (copy, nonatomic) NSString *userOpenIdStr;

+ (id)descriptor;

@end

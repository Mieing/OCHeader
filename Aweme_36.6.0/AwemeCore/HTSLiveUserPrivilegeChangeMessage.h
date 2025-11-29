@class NSString, HTSLiveCommon, HTSLiveImage;

@interface HTSLiveUserPrivilegeChangeMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int userPrivilegeType;
@property (nonatomic) long long userId;
@property (retain, nonatomic) HTSLiveImage *avatarBorder;
@property (nonatomic) BOOL hasAvatarBorder;
@property (retain, nonatomic) HTSLiveImage *thumbAvatarBorder;
@property (nonatomic) BOOL hasThumbAvatarBorder;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end

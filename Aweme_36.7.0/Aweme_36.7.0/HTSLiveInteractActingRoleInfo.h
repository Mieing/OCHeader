@class NSString, HTSLiveImage;

@interface HTSLiveInteractActingRoleInfo : IESLivePBBaseMessage

@property (nonatomic) long long roleId;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL hasAvatarThumb;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long pos;
@property (nonatomic) int auditStatus;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end

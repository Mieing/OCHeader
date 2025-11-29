@class NSString, UserAvatarInfo, UserAvatarItem;

@interface WAAppAuthInfoData : MMObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *scopeKey;
@property (copy, nonatomic) NSString *scopeDesc;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) UserAvatarInfo *avatarInfo;
@property (retain, nonatomic) NSString *subDesc;
@property (retain, nonatomic) NSString *authWording;
@property (retain, nonatomic) NSString *bottomDesc;
@property (retain, nonatomic) NSString *scopeSecDesc;
@property (retain, nonatomic) NSString *itemTitle;
@property (readonly, nonatomic) UserAvatarItem *selectedAvatarItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end

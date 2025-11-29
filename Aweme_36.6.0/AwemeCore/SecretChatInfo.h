@class NSString, NSMutableDictionary, GPBInt64ObjectDictionary;

@interface SecretChatInfo : IESLivePBBaseMessage

@property (nonatomic) long long ownerUid;
@property (nonatomic) long long guestUid;
@property (nonatomic) long long status;
@property (retain, nonatomic) GPBInt64ObjectDictionary *userAvatarThumbMap;
@property (readonly, nonatomic) unsigned long long userAvatarThumbMap_Count;
@property (copy, nonatomic) NSString *ownerUserOpenid;
@property (copy, nonatomic) NSString *guestUserOpenid;
@property (retain, nonatomic) NSMutableDictionary *openUserAvatarThumbMap;
@property (readonly, nonatomic) unsigned long long openUserAvatarThumbMap_Count;

+ (id)descriptor;

@end

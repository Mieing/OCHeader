@class NSString, UrlStructV2;

@interface FriendInteractionDiggStructV2 : GPBMessage

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL hasUserId;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL hasNickname;
@property (copy, nonatomic) NSString *remarkName;
@property (nonatomic) BOOL hasRemarkName;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL hasSecUid;
@property (retain, nonatomic) UrlStructV2 *avatar;
@property (nonatomic) BOOL hasAvatar;

+ (id)descriptor;

@end

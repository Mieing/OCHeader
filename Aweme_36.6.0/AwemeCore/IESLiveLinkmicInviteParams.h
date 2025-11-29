@class NSString;

@interface IESLiveLinkmicInviteParams : IESLivePBBaseMessage

@property (nonatomic) long long vendor;
@property (nonatomic) long long roomId;
@property (nonatomic) long long toRoomId;
@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSString *matchType;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *theme;
@property (copy, nonatomic) NSString *secToUserId;
@property (nonatomic) long long inviteType;
@property (nonatomic) long long subType;
@property (nonatomic) long long scene;
@property (nonatomic) long long resourceId;
@property (copy, nonatomic) NSString *activityName;
@property (nonatomic) int matchSubType;
@property (copy, nonatomic) NSString *signExtra;
@property (nonatomic) int inviteSource;
@property (nonatomic) int multiPkMode;
@property (nonatomic) long long inviteeScene;
@property (copy, nonatomic) NSString *inviteeFollowedUserIds;
@property (nonatomic) long long battleId;
@property (copy, nonatomic) NSString *battleConfigSetting;
@property (nonatomic) int inviteStatus;
@property (copy, nonatomic) NSString *battleAttachedInfo;
@property (copy, nonatomic) NSString *channelIdStr;
@property (copy, nonatomic) NSString *clientAttachedInfo;
@property (copy, nonatomic) NSString *openGameAppId;
@property (nonatomic) long long channelId;
@property (nonatomic) int pictureClipType;
@property (nonatomic) int bizType;
@property (copy, nonatomic) NSString *gameExtra;
@property (copy, nonatomic) NSString *bizExtra;
@property (nonatomic) long long bitrateKbps;
@property (nonatomic) long long resolutionWidth;
@property (nonatomic) long long resolutionHeight;
@property (copy, nonatomic) NSString *inviteeFollowedUserOpenIds;

+ (id)descriptor;

@end

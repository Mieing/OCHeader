@class NSString;

@interface ReplyParams : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (nonatomic) long long replyStatus;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *inviteUserId;
@property (copy, nonatomic) NSString *secInviteUserId;
@property (nonatomic) long long scene;
@property (nonatomic) long long resourceId;
@property (copy, nonatomic) NSString *signExtra;
@property (nonatomic) int multiPkMode;
@property (nonatomic) long long battleId;
@property (nonatomic) int switchPlayMode;
@property (nonatomic) long long matchType;
@property (copy, nonatomic) NSString *clientAttachedInfo;
@property (copy, nonatomic) NSString *openGameAppId;
@property (nonatomic) int pictureClipType;
@property (nonatomic) int bizType;
@property (nonatomic) long long bitrateKbps;
@property (nonatomic) long long resolutionWidth;
@property (nonatomic) long long resolutionHeight;

+ (id)descriptor;

@end

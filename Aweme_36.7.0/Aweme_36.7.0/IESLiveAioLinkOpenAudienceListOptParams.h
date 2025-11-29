@class NSString;

@interface IESLiveAioLinkOpenAudienceListOptParams : IESLivePBBaseMessage

@property (nonatomic) int audienceCount;
@property (nonatomic) BOOL isOpenliveLite;
@property (nonatomic) BOOL enableStraigtOut;
@property (nonatomic) BOOL enableSkeleton;
@property (nonatomic) BOOL audienceListOptEnable;
@property (copy, nonatomic) NSString *avatarFormat;
@property (nonatomic) int ktvRankTab;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *secAnchorId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *playerRankForbiddenCode;
@property (nonatomic) BOOL includeOffline;
@property (nonatomic) int offlineUserCount;
@property (copy, nonatomic) NSString *fromRoomId;

+ (id)descriptor;

@end

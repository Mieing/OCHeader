@class IESLiveAdventurePairInfo, NSString;

@interface HTSLiveLinkMicAdventureReplyContent : IESLivePBBaseMessage

@property (nonatomic) long long toUserId;
@property (nonatomic) int status;
@property (retain, nonatomic) IESLiveAdventurePairInfo *pairInfo;
@property (nonatomic) BOOL hasPairInfo;
@property (copy, nonatomic) NSString *inviteSource;
@property (copy, nonatomic) NSString *toOpenId;

+ (id)descriptor;

@end

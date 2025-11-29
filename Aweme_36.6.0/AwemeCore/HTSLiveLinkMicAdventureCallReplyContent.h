@class IESLiveAdventurePairInfo, NSString;

@interface HTSLiveLinkMicAdventureCallReplyContent : IESLivePBBaseMessage

@property (nonatomic) long long toUserId;
@property (nonatomic) int status;
@property (retain, nonatomic) IESLiveAdventurePairInfo *pairInfo;
@property (nonatomic) BOOL hasPairInfo;
@property (nonatomic) long long nextCallTime;
@property (copy, nonatomic) NSString *inviterRtcExtInfo;
@property (copy, nonatomic) NSString *inviterLiveCoreInfo;
@property (copy, nonatomic) NSString *toOpenId;

+ (id)descriptor;

@end

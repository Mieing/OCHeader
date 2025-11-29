@class IESLiveAdventurePairInfo;

@interface HTSLiveLinkMicAdventurePairInfoChangeContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveAdventurePairInfo *pairInfo;
@property (nonatomic) BOOL hasPairInfo;

+ (id)descriptor;

@end

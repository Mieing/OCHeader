@class NSString, IESLiveAdventurePlayModeInfo;

@interface HTSLiveLinkMicAdventureFinishContent : IESLivePBBaseMessage

@property (nonatomic) long long duration;
@property (nonatomic) long long pairCount;
@property (nonatomic) long long audienceJoin;
@property (retain, nonatomic) IESLiveAdventurePlayModeInfo *playModeInfo;
@property (nonatomic) BOOL hasPlayModeInfo;
@property (nonatomic) long long operatorId;
@property (copy, nonatomic) NSString *operatorOpenId;

+ (id)descriptor;

@end

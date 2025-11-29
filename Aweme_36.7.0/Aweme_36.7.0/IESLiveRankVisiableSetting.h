@class NSDictionary;

@interface IESLiveRankVisiableSetting : NSObject

@property (retain, nonatomic) NSDictionary *liveRankConfigDic;

+ (BOOL)isRewardSpecialEffectsEnabled;
+ (BOOL)isRegionRankVisible;
+ (long long)entranceDisplayThreshold;
+ (id)rewardBubbleText;
+ (id)rewardDividerText;
+ (long long)highlightHeaderTime;
+ (double)epilogueStageTime;
+ (id)hourEntranceDefaultText;
+ (double)epilogueStageCountdownTimeInterval;
+ (double)sameTypeDelayDuration;
+ (id)rankListBottomButtonText;
+ (id)singleton;

- (void).cxx_destruct;
- (id)init;

@end

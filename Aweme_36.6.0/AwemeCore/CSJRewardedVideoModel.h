@class NSString, NSArray;

@interface CSJRewardedVideoModel : NSObject

@property (nonatomic) long long reward_info_source;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *rewardName;
@property (nonatomic) long long rewardAmount;
@property (nonatomic) long long rewardType;
@property (nonatomic) float rewardPropose;
@property (copy, nonatomic) NSArray *advancedRewardTypes;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isMemberOfClass:(Class)a0;
- (BOOL)isKindOfClass:(Class)a0;

@end

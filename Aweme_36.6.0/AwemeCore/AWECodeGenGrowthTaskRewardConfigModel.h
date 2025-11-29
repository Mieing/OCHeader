@class NSString;

@interface AWECodeGenGrowthTaskRewardConfigModel : AWEBaseDataModel

@property (nonatomic) long long rewardAmount;
@property (copy, nonatomic) NSString *rewardUnit;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

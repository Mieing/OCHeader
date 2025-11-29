@class NSDictionary, NSArray;

@interface BDPMoreRewardInfo : NSObject

@property (copy, nonatomic) NSDictionary *originalDict;
@property (nonatomic) long long rewardTimes;
@property (copy, nonatomic) NSArray *rewardMsgArray;
@property (nonatomic) BOOL useProgressTip;

+ (id)infoWithDict:(id)a0;

- (void).cxx_destruct;

@end

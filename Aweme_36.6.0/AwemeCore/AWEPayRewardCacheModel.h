@class NSString, NSArray;

@interface AWEPayRewardCacheModel : NSObject

@property (nonatomic) long long rit;
@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSString *extParamStr;
@property (copy, nonatomic) NSArray *rewardArray;

- (void).cxx_destruct;

@end

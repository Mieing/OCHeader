@class NSString;

@interface AWELuckyCatTimesCountModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long taskLimit;
@property (nonatomic) long long rewardNum;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

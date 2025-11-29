@class NSString, NSArray;

@interface AWETaskRewardSharingInfo : AWEBaseApiModel

@property (nonatomic) long long sharedPercentage;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSArray *participateUserAvatar;
@property (copy, nonatomic) NSString *participateUserCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface IESECWinUnfollowResponse : IESECBaseApiModel

@property (copy, nonatomic) NSString *deleteFollowSuccessMsg;
@property (nonatomic) long long followStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

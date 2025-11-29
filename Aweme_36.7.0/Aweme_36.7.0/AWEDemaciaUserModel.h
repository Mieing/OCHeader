@class NSString;

@interface AWEDemaciaUserModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long followStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

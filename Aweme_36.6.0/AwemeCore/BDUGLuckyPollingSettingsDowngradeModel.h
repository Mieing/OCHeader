@class NSDictionary;

@interface BDUGLuckyPollingSettingsDowngradeModel : BDUGLuckyBDModel

@property (nonatomic) long long f2Downgrade;
@property (nonatomic) long long feedDowngrade;
@property (nonatomic) long long activityDowngrade;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)keyMapper;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end

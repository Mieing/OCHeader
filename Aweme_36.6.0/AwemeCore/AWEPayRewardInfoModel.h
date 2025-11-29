@class NSString;

@interface AWEPayRewardInfoModel : JSONModel

@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *rewardImage;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

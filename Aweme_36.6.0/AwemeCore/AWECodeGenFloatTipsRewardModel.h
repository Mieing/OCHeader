@class NSString;

@interface AWECodeGenFloatTipsRewardModel : AWEBaseDataModel

@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *amountType;
@property (copy, nonatomic) NSString *icon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

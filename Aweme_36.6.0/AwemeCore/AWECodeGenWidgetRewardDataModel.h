@class NSString;

@interface AWECodeGenWidgetRewardDataModel : AWEBaseDataModel

@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *amountType;
@property (copy, nonatomic) NSString *successDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

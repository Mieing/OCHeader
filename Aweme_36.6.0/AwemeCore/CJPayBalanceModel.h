@class NSString;

@interface CJPayBalanceModel : CJPayChannelModel

@property (nonatomic) int balanceAmount;
@property (copy, nonatomic) NSString *balanceQuota;
@property (nonatomic) int freezedAmount;
@property (copy, nonatomic) NSString *mobile;
@property (nonatomic) BOOL isShowCombinePay;
@property (copy, nonatomic) NSString *primaryCombinePayAmount;

+ (id)keyMapper;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)buildShowConfig;
- (id)requestNeedParams;
- (void).cxx_destruct;

@end

@class NSString;

@interface CJPayCombinePayFund : JSONModel

@property (copy, nonatomic) NSString *fundTypeDesc;
@property (copy, nonatomic) NSString *fundType;
@property (copy, nonatomic) NSString *fundAmountDesc;
@property (nonatomic) long long fundAmount;

+ (id)keyMapper;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end

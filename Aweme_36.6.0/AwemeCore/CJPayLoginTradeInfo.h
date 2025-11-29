@class NSString;

@interface CJPayLoginTradeInfo : JSONModel

@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSString *payAmount;
@property (copy, nonatomic) NSString *tradeAmount;
@property (copy, nonatomic) NSString *tradeName;
@property (copy, nonatomic) NSString *tradeDesc;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *outTradeNo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

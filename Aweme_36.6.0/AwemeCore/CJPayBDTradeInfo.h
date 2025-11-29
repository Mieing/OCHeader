@class NSString, NSArray, NSDictionary;
@protocol CJPayAssetPayFund, CJPayCombinePayFund;

@interface CJPayBDTradeInfo : JSONModel

@property (copy, nonatomic) NSString *createTime;
@property (copy, nonatomic) NSString *expireTime;
@property (copy, nonatomic) NSString *outTradeNo;
@property (copy, nonatomic) NSString *returnUrl;
@property (nonatomic) long long tradeAmount;
@property (copy, nonatomic) NSString *tradeDesc;
@property (copy, nonatomic) NSString *tradeName;
@property (copy, nonatomic) NSString *secondaryTradeName;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *tradeStatusString;
@property (copy, nonatomic) NSString *tradeTime;
@property (copy, nonatomic) NSString *amountCanChange;
@property (copy, nonatomic) NSString *tradeType;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *tradeDescMessage;
@property (copy, nonatomic) NSString *bankCodeMask;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *failMsg;
@property (copy, nonatomic) NSString *expectedTime;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *rechargeType;
@property (copy, nonatomic) NSString *serviceFee;
@property (copy, nonatomic) NSString *remark;
@property (copy, nonatomic) NSString *tradeInfoType;
@property (copy, nonatomic) NSString *finishTime;
@property (copy, nonatomic) NSString *withdrawType;
@property (nonatomic) long long payAmount;
@property (readonly, nonatomic) BOOL isFailed;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *merchantID;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *payType;
@property (copy, nonatomic) NSArray<CJPayCombinePayFund> *combinePayFundList;
@property (copy, nonatomic) NSArray<CJPayAssetPayFund> *fundBillList;
@property (copy, nonatomic) NSString *creditPayInstallmentDesc;
@property (copy, nonatomic) NSString *discountDesc;
@property (nonatomic) long long reduceAmount;
@property (nonatomic) BOOL isTradeCreateAgain;
@property (copy, nonatomic) NSString *sellProductCode;
@property (copy, nonatomic) NSDictionary *extension;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;
+ (long long)statusFromString:(id)a0;

- (unsigned long long)tradeStatus;
- (id)formattedCreateTime;
- (void).cxx_destruct;

@end

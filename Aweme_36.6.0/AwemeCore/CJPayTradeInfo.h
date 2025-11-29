@class NSString, CJPayBDOrderResultResponse;

@interface CJPayTradeInfo : JSONModel

@property (nonatomic) long long amount;
@property (nonatomic) long long realAmount;
@property (nonatomic) long long createTime;
@property (copy, nonatomic) NSString *currency;
@property (nonatomic) long long expireTime;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *outTradeNo;
@property (nonatomic) long long payTime;
@property (copy, nonatomic) NSString *payType;
@property (copy, nonatomic) NSString *ptCode;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *tradeDesc;
@property (copy, nonatomic) NSString *tradeName;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *tradeTime;
@property (copy, nonatomic) NSString *uid;
@property (readonly, nonatomic) unsigned long long tradeStatus;
@property (copy, nonatomic) NSString *statInfo;
@property (copy, nonatomic) NSString *bdpayResultDicStr;
@property (retain, nonatomic) CJPayBDOrderResultResponse *bdpayResultResponse;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

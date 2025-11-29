@class BaseRequest, NSString, GetWecoinPriceListResponse;

@interface PrepareWecoinRechargeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *rechargeProductId;
@property (nonatomic) unsigned int agreementVersion;
@property (nonatomic) unsigned long long customCount;
@property (nonatomic) unsigned int businessId;
@property (nonatomic) unsigned long long diffWecoinCount;
@property (retain, nonatomic) GetWecoinPriceListResponse *priceListResp;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *reportSessionId;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSString *sdkVersion;

+ (void)initialize;

@end

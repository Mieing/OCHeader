@class WecoinCustomRechargeInfo, NSString, NSMutableArray, BaseResponse;

@interface GetWecoinPriceListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *priceInfos;
@property (retain, nonatomic) NSString *agreementUrl;
@property (nonatomic) int agreementStatus;
@property (nonatomic) unsigned int agreementVersion;
@property (retain, nonatomic) WecoinCustomRechargeInfo *customRechargeInfo;

+ (void)initialize;

@end

@class BaseRequest, NSString;

@interface GetWecoinPriceListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int businessId;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) unsigned int diffWecoinCount;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *reportSessionId;
@property (retain, nonatomic) NSString *sdkVersion;

+ (void)initialize;

@end

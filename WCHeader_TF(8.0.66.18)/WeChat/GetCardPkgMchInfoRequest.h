@class BaseRequest, NSString;

@interface GetCardPkgMchInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *cardPackMerchantId;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned long long lastReceiveTime;
@property (nonatomic) unsigned int sortRule;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end

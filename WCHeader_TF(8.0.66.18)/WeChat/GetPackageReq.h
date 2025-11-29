@class BaseRequest, NSString;

@interface GetPackageReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int priceLevel;
@property (retain, nonatomic) NSString *busiId;
@property (nonatomic) unsigned int busiType;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *currencyType;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *attach;
@property (nonatomic) unsigned int wxaVersionType;
@property (retain, nonatomic) NSString *productType;
@property (nonatomic) unsigned int env;
@property (retain, nonatomic) NSString *extInfo;

+ (void)initialize;

@end

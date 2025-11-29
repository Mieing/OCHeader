@class BaseRequest, NSString;

@interface PurchaseFundReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *fundCode;
@property (nonatomic) unsigned int purchaseFee;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *spid;
@property (retain, nonatomic) NSString *operateId;
@property (nonatomic) unsigned int entranceType;
@property (retain, nonatomic) NSString *bankType;
@property (retain, nonatomic) NSString *bankSerial;
@property (nonatomic) unsigned int supportCrossPlatformCashier;
@property (nonatomic) unsigned int supportJointCashier;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end

@class BaseRequest, NSString;

@interface OnClickPurchaseReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int accountType;
@property (nonatomic) unsigned int entranceType;
@property (retain, nonatomic) NSString *bindSerial;
@property (retain, nonatomic) NSString *newBindSerial;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end

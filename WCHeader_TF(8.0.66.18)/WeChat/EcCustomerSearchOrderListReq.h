@class BaseRequest, NSString;

@interface EcCustomerSearchOrderListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *lastOrderId;
@property (nonatomic) unsigned int pageSize;
@property (nonatomic) unsigned int offset;
@property (nonatomic) BOOL needEvaluationStatus;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end

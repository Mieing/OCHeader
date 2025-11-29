@class BaseRequest, NSString;

@interface EcCustomerGetOrderListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int tabType;
@property (retain, nonatomic) NSString *lastOrderId;
@property (nonatomic) unsigned int pageSize;
@property (retain, nonatomic) NSString *lastIndex;
@property (nonatomic) BOOL needEvaluationStatus;
@property (nonatomic) unsigned int evaluationStatus;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end

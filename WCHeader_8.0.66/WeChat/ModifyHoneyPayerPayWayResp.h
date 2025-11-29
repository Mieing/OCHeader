@class NSString, PayWay, BaseResponse;

@interface ModifyHoneyPayerPayWayResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) PayWay *newPayWay;

+ (void)initialize;

@end

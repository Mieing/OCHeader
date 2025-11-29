@class BaseRequest, NSString;

@interface MmecB2CGetActivityInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizAcctAppid;
@property (retain, nonatomic) NSString *shopAppid;
@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned long long activityOrderId;

+ (void)initialize;

@end

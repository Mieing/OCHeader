@class BaseRequest, NSString;

@interface ModifyHoneyPayerNotifyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int notifyFlag;
@property (retain, nonatomic) NSString *cardNo;

+ (void)initialize;

@end

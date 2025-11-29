@class BaseRequest, NSString;

@interface PolicyAgreementOpRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *policyList;
@property (retain, nonatomic) NSString *policyTicket;
@property (retain, nonatomic) NSString *policyCustomInfo;

+ (void)initialize;

@end

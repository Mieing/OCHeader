@class BaseRequest, NSMutableArray;

@interface ModServiceAgreementReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int op;
@property (retain, nonatomic) NSMutableArray *agreementInfo;

+ (void)initialize;

@end

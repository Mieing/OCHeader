@class BaseRequest, NSString;

@interface RedeemFundReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int redeemFee;
@property (retain, nonatomic) NSString *redeemListid;
@property (retain, nonatomic) NSString *payPasswdEnc;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *operateId;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end

@class BaseRequest, BankCardInfo, NSString;

@interface PreRedeemFundReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int redeemFee;
@property (nonatomic) unsigned int redeemDest;
@property (retain, nonatomic) BankCardInfo *bankCardInfo;
@property (nonatomic) unsigned int accountType;
@property (nonatomic) unsigned int redeemType;
@property (retain, nonatomic) NSString *operateId;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end

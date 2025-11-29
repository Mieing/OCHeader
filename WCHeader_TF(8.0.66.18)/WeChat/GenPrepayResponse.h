@class NSString, WalletMixSpGenprepayResp, BaseResponse;

@interface GenPrepayResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *prepayId;
@property (retain, nonatomic) NSString *appSource;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) WalletMixSpGenprepayResp *walletMixSpGenprepayResp;

+ (void)initialize;

@end

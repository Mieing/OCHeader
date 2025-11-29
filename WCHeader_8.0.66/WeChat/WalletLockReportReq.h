@interface WalletLockReportReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int protectscene;
@property (nonatomic) unsigned int verifytype;
@property (nonatomic) int verifyresult;
@property (nonatomic) unsigned int failreason;

+ (void)initialize;

@end

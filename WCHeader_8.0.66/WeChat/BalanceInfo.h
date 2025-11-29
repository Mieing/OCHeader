@class NSString, BalanceMenuInfo, PromptInfo;

@interface BalanceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *useCftBalance;
@property (retain, nonatomic) NSString *balanceBankType;
@property (retain, nonatomic) NSString *balanceBindSerial;
@property (retain, nonatomic) NSString *balanceForbidWord;
@property (retain, nonatomic) NSString *totalBalance;
@property (retain, nonatomic) NSString *availBalance;
@property (retain, nonatomic) NSString *frozenBalance;
@property (retain, nonatomic) NSString *fetchBalance;
@property (retain, nonatomic) NSString *mobile;
@property (retain, nonatomic) NSString *supportMicropay;
@property (retain, nonatomic) NSString *balanceListUrl;
@property (retain, nonatomic) NSString *availFetchWording;
@property (retain, nonatomic) NSString *maxFetchWording;
@property (nonatomic) unsigned long long balanceVersion;
@property (nonatomic) unsigned int timeOut;
@property (retain, nonatomic) NSString *balanceLogoUrl;
@property (retain, nonatomic) NSString *forbidTitle;
@property (retain, nonatomic) NSString *forbidUrl;
@property (retain, nonatomic) NSString *balanceShowWording;
@property (retain, nonatomic) NSString *balanceForbidId;
@property (retain, nonatomic) BalanceMenuInfo *balanceMenuInfo;
@property (retain, nonatomic) PromptInfo *promptInfo;

+ (void)initialize;

@end

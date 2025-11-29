@class NSData, NSString, BusiF2FFaultConfig, ShowMessage, AmountRemindPage, BaseResponse, CheckRecvNameWin, TokeMess, AmountRemindWin;

@interface BusiF2FPlaceOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *reqKey;
@property (retain, nonatomic) NSString *interruptDesc;
@property (retain, nonatomic) ShowMessage *showmessage;
@property (retain, nonatomic) NSString *f2FId;
@property (retain, nonatomic) NSString *payokChecksign;
@property (retain, nonatomic) NSString *sucPageExtend;
@property (retain, nonatomic) NSString *unlockFavorExtend;
@property (nonatomic) unsigned int reGetfavor;
@property (retain, nonatomic) NSString *transId;
@property (retain, nonatomic) NSString *paycheckExtend;
@property (nonatomic) unsigned int zeroPayFlag;
@property (nonatomic) unsigned int payerNeedAuthFlag;
@property (retain, nonatomic) TokeMess *tockMess;
@property (retain, nonatomic) NSString *zeroPayExtend;
@property (nonatomic) unsigned int zeroTryTime;
@property (nonatomic) unsigned int zeroTryIntervalMs;
@property (nonatomic) unsigned int canUseFingerprint;
@property (retain, nonatomic) NSData *touchChallenge;
@property (nonatomic) int needChangeAuthKey;
@property (nonatomic) unsigned int getDynamicCodeFlag;
@property (retain, nonatomic) NSString *getDynamicCodeSign;
@property (retain, nonatomic) NSString *getDynamicCodeExtend;
@property (nonatomic) unsigned int dynamicCodeAmount;
@property (retain, nonatomic) NSString *showPayingWording;
@property (retain, nonatomic) NSString *dynamicCodeSpamWording;
@property (nonatomic) unsigned int returnToMainPage;
@property (retain, nonatomic) BusiF2FFaultConfig *faultConfig;
@property (retain, nonatomic) AmountRemindWin *amountRemindWin;
@property (retain, nonatomic) AmountRemindPage *amountRemindPage;
@property (retain, nonatomic) CheckRecvNameWin *checkRecvNameWin;
@property (nonatomic) BOOL jumpThirdpartyCashier;
@property (retain, nonatomic) NSString *thirdpartyCashierPackageBase64;

+ (void)initialize;

@end

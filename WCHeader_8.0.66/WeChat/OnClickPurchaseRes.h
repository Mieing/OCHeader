@class LqtBindQueryInfo, NSString, NSMutableArray, LqtDialog, FaultControlInfo, BaseResponse;

@interface OnClickPurchaseRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) LqtBindQueryInfo *lqtBindQueryInfo;
@property (retain, nonatomic) NSString *exceedingWording;
@property (retain, nonatomic) NSString *upgradeLinkWording;
@property (retain, nonatomic) NSString *upgradeUrl;
@property (nonatomic) unsigned int remainingBalance;
@property (retain, nonatomic) NSString *bottomWording;
@property (retain, nonatomic) NSString *realNameInfo;
@property (retain, nonatomic) FaultControlInfo *faultControlInfo;
@property (retain, nonatomic) NSString *daeAuthorizationPromptWording;
@property (nonatomic) BOOL autoPullUpKeyboard;
@property (nonatomic) BOOL isShowProtocol;
@property (nonatomic) BOOL isProtocolDefaultChecked;
@property (retain, nonatomic) NSMutableArray *protocolList;
@property (retain, nonatomic) NSString *bottomTipsWording;
@property (retain, nonatomic) NSMutableArray *hintBelowAmount;
@property (retain, nonatomic) NSString *lqLimitReliefFirsttimeWording;
@property (retain, nonatomic) NSMutableArray *hintOfKeyboard;
@property (retain, nonatomic) NSMutableArray *interceptDialogs;
@property (retain, nonatomic) LqtDialog *dialog;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end

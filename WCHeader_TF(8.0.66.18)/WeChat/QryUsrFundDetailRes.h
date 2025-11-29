@class ComonPromptInfo, PopUpsItem, FinancialInfo, BaseResponse, DocumentItem, NSMutableArray, NewDocumentItem, NSString, LctOperationInfo, LqtDialog, LQTDetailButton, PopUpWithHalfDialog, MiniAppsItem;

@interface QryUsrFundDetailRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int balance;
@property (retain, nonatomic) NSString *gainRateDesc;
@property (retain, nonatomic) NSString *gainRateVal;
@property (retain, nonatomic) NSString *totalGainDesc;
@property (nonatomic) unsigned int totalGainVal;
@property (retain, nonatomic) NSMutableArray *infoNodeLst;
@property (nonatomic) int isShowProtocol;
@property (nonatomic) int isProtocolDefault;
@property (retain, nonatomic) NSMutableArray *protocolLst;
@property (retain, nonatomic) NSString *fundCode;
@property (retain, nonatomic) DocumentItem *bottomFaqDesc;
@property (retain, nonatomic) NSMutableArray *actionSheet;
@property (retain, nonatomic) DocumentItem *banner;
@property (retain, nonatomic) MiniAppsItem *miniapps;
@property (retain, nonatomic) NSString *blockUrl;
@property (nonatomic) unsigned int maxAmountPerRedeem;
@property (retain, nonatomic) NSString *invalidAmountHint;
@property (retain, nonatomic) NSString *profitDate;
@property (nonatomic) unsigned int buyValid;
@property (nonatomic) BOOL isHideCloseAccountBtn;
@property (nonatomic) unsigned int accountType;
@property (retain, nonatomic) NSString *spid;
@property (retain, nonatomic) NSString *gainRateUrl;
@property (retain, nonatomic) NSString *totalGainUrl;
@property (retain, nonatomic) NSMutableArray *newInfoNodeLst;
@property (retain, nonatomic) NSString *fundName;
@property (retain, nonatomic) NSString *closeLqtTips;
@property (retain, nonatomic) NSString *greyCloseLqtTips;
@property (retain, nonatomic) NSString *bottomWording;
@property (retain, nonatomic) NewDocumentItem *activityBtn;
@property (retain, nonatomic) NSString *yesterdayGainDesc;
@property (retain, nonatomic) NSString *financialInfoWording;
@property (retain, nonatomic) FinancialInfo *financialInfo;
@property (retain, nonatomic) LQTDetailButton *transferIn;
@property (retain, nonatomic) LQTDetailButton *transferOut;
@property (nonatomic) BOOL isShowPopups;
@property (retain, nonatomic) PopUpsItem *popupsItem;
@property (retain, nonatomic) NSMutableArray *newActionSheet;
@property (retain, nonatomic) NSString *realnameGuideInfo;
@property (retain, nonatomic) NSString *balanceUrl;
@property (retain, nonatomic) LctOperationInfo *lctOperationInfo;
@property (retain, nonatomic) NewDocumentItem *subtitleBanner;
@property (retain, nonatomic) NewDocumentItem *middleNoticeBanner;
@property (nonatomic) BOOL transferInDisable;
@property (nonatomic) BOOL transferOutDisable;
@property (retain, nonatomic) ComonPromptInfo *bottomOpenFofEntrance;
@property (retain, nonatomic) NSString *balanceUrlDesc;
@property (nonatomic) BOOL autoPullFinancialInfo;
@property (retain, nonatomic) LqtDialog *dialog;
@property (retain, nonatomic) NSString *traceInfo;
@property (retain, nonatomic) PopUpWithHalfDialog *halfDialog;
@property (retain, nonatomic) PopUpWithHalfDialog *firstPurchaseDialog;
@property (retain, nonatomic) NSMutableArray *operationInfo;
@property (nonatomic) unsigned int pageStyle;
@property (retain, nonatomic) PopUpWithHalfDialog *upgradeToFixedDepositRemindHalfDialog;
@property (nonatomic) unsigned int transferInOutBtnStyle;

+ (void)initialize;

@end

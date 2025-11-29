@class NSString, PopUpsItem, FaultControlInfo, BaseResponse, ComonPromptInfo, LqtBindQueryInfo, NSMutableArray, LqtDialog, PopUpWithHalfDialog;

@interface OnClickRedeemRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int balance;
@property (nonatomic) unsigned int lqBalance;
@property (nonatomic) unsigned int bankBalance;
@property (retain, nonatomic) NSMutableArray *informationLst;
@property (retain, nonatomic) LqtBindQueryInfo *lqtBindQueryInfo;
@property (retain, nonatomic) NSMutableArray *lqRedeemTypeList;
@property (retain, nonatomic) NSMutableArray *bankRedeemTypeInfo;
@property (nonatomic) BOOL isShowPopups;
@property (retain, nonatomic) PopUpsItem *popupsItem;
@property (retain, nonatomic) NSString *realNameInfo;
@property (retain, nonatomic) FaultControlInfo *faultControlInfo;
@property (nonatomic) unsigned int fastRedeemFeeLimit;
@property (retain, nonatomic) NSString *redeemToBankWording;
@property (retain, nonatomic) PopUpWithHalfDialog *redeemToLqExceedGuide;
@property (retain, nonatomic) PopUpWithHalfDialog *redeemToLqExceedDetail;
@property (retain, nonatomic) NSString *redeemToBankExceedWording;
@property (retain, nonatomic) ComonPromptInfo *redeemToBankExceedSecondLineMsg;
@property (retain, nonatomic) PopUpWithHalfDialog *redeemToBankExceedDetail;
@property (retain, nonatomic) NSMutableArray *hintBelowAmount;
@property (retain, nonatomic) LqtDialog *dialog;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end

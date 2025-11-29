@class NSMutableArray, NSString, PreAddPlanResp_ProtocolItem, PreAddPlanResp_IncomeTipsItem, BaseResponse;

@interface PreAddPlanResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) PreAddPlanResp_IncomeTipsItem *tips;
@property (retain, nonatomic) PreAddPlanResp_ProtocolItem *protocol;
@property (retain, nonatomic) NSString *defaultCardBindSerial;
@property (retain, nonatomic) NSMutableArray *array;
@property (nonatomic) BOOL isHideBankCard;
@property (nonatomic) unsigned int usrPlanId;
@property (retain, nonatomic) NSString *dayQuota3Tips;
@property (nonatomic) unsigned int defaultTransDay;
@property (nonatomic) unsigned long long defaultAmount;
@property (retain, nonatomic) NSString *productDesc;
@property (retain, nonatomic) NSString *marketingWording;
@property (retain, nonatomic) NSString *balanceWarningWording;
@property (retain, nonatomic) NSString *chooseTransTimeTitle;
@property (retain, nonatomic) NSString *chooseAmountTitle;
@property (retain, nonatomic) NSMutableArray *recommendedAmtList;

+ (void)initialize;

@end

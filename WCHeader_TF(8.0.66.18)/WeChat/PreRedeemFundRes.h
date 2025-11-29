@class BaseResponse, NSString, LqtDialog, DialogComplianceHalfPageViewData, PopUpWithHalfDialog;

@interface PreRedeemFundRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *redeemListid;
@property (retain, nonatomic) PopUpWithHalfDialog *halfDialog;
@property (retain, nonatomic) LqtDialog *dialog;
@property (retain, nonatomic) NSString *traceInfo;
@property (retain, nonatomic) DialogComplianceHalfPageViewData *halfPageViewData;

+ (void)initialize;

@end

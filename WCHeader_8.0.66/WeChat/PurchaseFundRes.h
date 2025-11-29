@class BaseResponse, NSString, LqtDialog, PopUpWithHalfDialog;

@interface PurchaseFundRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *prepayid;
@property (retain, nonatomic) NSString *outTradeNo;
@property (nonatomic) int payScene;
@property (nonatomic) unsigned int cashierType;
@property (retain, nonatomic) PopUpWithHalfDialog *halfDialog;
@property (retain, nonatomic) LqtDialog *dialog;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end

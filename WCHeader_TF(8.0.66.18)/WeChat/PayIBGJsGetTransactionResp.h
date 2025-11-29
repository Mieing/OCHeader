@class NSMutableArray, NSString, PayIBGBizInfo, PayIBGTransaction, BaseResponse;

@interface PayIBGJsGetTransactionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) PayIBGTransaction *transactionDetail;
@property (retain, nonatomic) PayIBGBizInfo *bizInfo;
@property (retain, nonatomic) NSMutableArray *activityInfo;
@property (nonatomic) int isUseNewPage;
@property (retain, nonatomic) NSMutableArray *showInfo;
@property (nonatomic) int isUseShowInfo;

+ (void)initialize;

@end

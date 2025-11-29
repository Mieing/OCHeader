@class NSArray, CJPayResultPageInfoModel, CJPayTradeInfo, NSString;
@protocol CJPayPaymentInfo;

@interface CJPayOrderResultResponse : CJPayIntergratedBaseResponse

@property (retain, nonatomic) CJPayTradeInfo *tradeInfo;
@property (nonatomic) long long remainTime;
@property (copy, nonatomic) NSArray<CJPayPaymentInfo> *paymentInfo;
@property (retain, nonatomic) CJPayResultPageInfoModel *resultPageInfo;
@property (copy, nonatomic) NSString *openSchema;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *commonResultInfo;

+ (id)keyMapper;

- (void).cxx_destruct;

@end

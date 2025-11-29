@class NSArray, NSString, CJPayTradeInfo, CJPayFEGuideInfoModel;
@protocol CJPayPaymentInfo;

@interface CJPayUnifyPayIntegratedQueryResponse : CJPayBaseResponse

@property (retain, nonatomic) CJPayTradeInfo *tradeInfo;
@property (nonatomic) long long remainTime;
@property (copy, nonatomic) NSArray<CJPayPaymentInfo> *paymentInfo;
@property (copy, nonatomic) NSString *openSchema;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *commonResultInfo;
@property (copy, nonatomic) NSString *unifyCashierQueryResult;
@property (retain, nonatomic) CJPayFEGuideInfoModel *feGuideInfoModel;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *errorType;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *innerMsg;
@property (copy, nonatomic) NSString *typecnt;
@property (copy, nonatomic) NSString *errorData;
@property (copy, nonatomic) NSString *processStr;
@property (nonatomic) double responseDuration;
@property (nonatomic) BOOL hiddenResultPage;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)basicMapperWith:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end

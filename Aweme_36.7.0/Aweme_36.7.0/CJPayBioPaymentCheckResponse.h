@interface CJPayBioPaymentCheckResponse : CJPayBaseResponse

@property (nonatomic) BOOL fingerPrintPay;
@property (nonatomic) BOOL faceIdPay;

+ (id)keyMapper;

@end

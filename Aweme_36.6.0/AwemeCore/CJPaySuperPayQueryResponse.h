@class NSString, CJPaySuperPaySDKInfoModel, CJPayPaymentInfoModel, NSDictionary, CJPayHintInfo;

@interface CJPaySuperPayQueryResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *payStatus;
@property (copy, nonatomic) NSString *loadingMsg;
@property (copy, nonatomic) NSString *loadingSubMsg;
@property (copy, nonatomic) NSString *sdkInfo;
@property (copy, nonatomic) NSString *payAgainInfo;
@property (retain, nonatomic) CJPaySuperPaySDKInfoModel *sdkInfoModel;
@property (retain, nonatomic) CJPayHintInfo *hintInfo;
@property (retain, nonatomic) CJPayPaymentInfoModel *paymentInfo;
@property (nonatomic) BOOL showToast;
@property (copy, nonatomic) NSDictionary *ext;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

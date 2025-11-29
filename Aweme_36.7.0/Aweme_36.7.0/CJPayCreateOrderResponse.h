@class NSString, NSArray, CJPayTradeInfo, CJPayUnifyCashierRenderModel, CJPayUserInfo, NSDictionary, CJPayDeskConfig, CJPayMerchantInfo, CJPayDividedButtonInfo, CJPayTypeInfo;

@interface CJPayCreateOrderResponse : CJPayIntergratedBaseResponse

@property (copy, nonatomic) NSDictionary *dataInfo;
@property (copy, nonatomic) NSString *originJsonString;
@property (retain, nonatomic) CJPayTradeInfo *tradeInfo;
@property (retain, nonatomic) CJPayTypeInfo *payInfo;
@property (retain, nonatomic) CJPayDeskConfig *deskConfig;
@property (retain, nonatomic) CJPayMerchantInfo *merchantInfo;
@property (retain, nonatomic) CJPayUserInfo *userInfo;
@property (retain, nonatomic) CJPayDividedButtonInfo *dividedBtnInfoData;
@property (copy, nonatomic) NSDictionary *feMetrics;
@property (copy, nonatomic) NSString *dypayReturnURL;
@property (copy, nonatomic) NSString *paySource;
@property (copy, nonatomic) NSString *toastMsg;
@property (copy, nonatomic) NSArray *sortedPtcodes;
@property (nonatomic) long long showNum;
@property (retain, nonatomic) CJPayUnifyCashierRenderModel *unifyPayModel;
@property (copy, nonatomic) NSDictionary *exts;
@property (copy, nonatomic) NSString *jhPassThrough;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (long long)closeAfterTime;
- (BOOL)isAssetStandardProcess;
- (long long)totalAmountWithDiscount;
- (BOOL)isUnifyCashier;
- (void).cxx_destruct;

@end

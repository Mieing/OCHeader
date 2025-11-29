@class NSString, NSDictionary, CJPayFaceVerifyInfo;

@interface CJPayDirectBankModel : JSONModel

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *outTradeNo;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *transferNo;
@property (copy, nonatomic) NSString *needFace;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *processId;
@property (retain, nonatomic) CJPayFaceVerifyInfo *faceVerifyInfo;
@property (copy, nonatomic) NSString *needBindCard;
@property (copy, nonatomic) NSString *zgAppId;
@property (copy, nonatomic) NSString *zgMerchantId;
@property (copy, nonatomic) NSString *needQueryFaceData;
@property (copy, nonatomic) NSString *needOpenAccount;
@property (copy, nonatomic) NSString *openAccountUrl;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSDictionary *trackInfoDic;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

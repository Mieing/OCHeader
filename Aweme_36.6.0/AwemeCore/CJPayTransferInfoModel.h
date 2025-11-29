@class NSString, NSDictionary, CJPayFaceVerifyInfo;

@interface CJPayTransferInfoModel : JSONModel

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *outTradeNo;
@property (copy, nonatomic) NSString *tradeNo;
@property (copy, nonatomic) NSString *needIdentity;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *processId;
@property (copy, nonatomic) NSString *needBindCard;
@property (copy, nonatomic) NSString *zgAppId;
@property (copy, nonatomic) NSString *zgMerchantId;
@property (copy, nonatomic) NSString *needQueryIdentity;
@property (copy, nonatomic) NSString *needOpenAccount;
@property (copy, nonatomic) NSString *openAccountUrl;
@property (nonatomic) int way;
@property (copy, nonatomic) NSString *verifyId;
@property (copy, nonatomic) NSString *verifyToken;
@property (copy, nonatomic) NSString *banksUrl;
@property (copy, nonatomic) NSDictionary *trackInfoDic;
@property (copy, nonatomic) NSString *needFace;
@property (copy, nonatomic) NSString *needQueryFaceData;
@property (retain, nonatomic) CJPayFaceVerifyInfo *faceVerifyInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

@class NSString, UIViewController, CJPayFaceVerifyInfo;

@interface CJPayBioPaymentBaseRequestModel : JSONModel

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *signType;
@property (copy, nonatomic) NSString *sign;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *did;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *smchId;
@property (copy, nonatomic) NSString *verifyType;
@property (retain, nonatomic) CJPayFaceVerifyInfo *verifyInfo;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (nonatomic) BOOL isOnlyReturnDeviceType;
@property (weak, nonatomic) UIViewController *referVC;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *token;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end

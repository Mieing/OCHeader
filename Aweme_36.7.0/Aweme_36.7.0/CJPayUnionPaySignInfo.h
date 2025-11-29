@class NSString, CJPayMemberFaceVerifyInfoModel;

@interface CJPayUnionPaySignInfo : JSONModel

@property (copy, nonatomic) NSString *additionalVerifyType;
@property (copy, nonatomic) NSString *actionPageType;
@property (copy, nonatomic) NSString *identityVerifyOrderNo;
@property (retain, nonatomic) CJPayMemberFaceVerifyInfoModel *faceVerifyInfoModel;
@property (copy, nonatomic) NSString *unionPaySignStatus;
@property (copy, nonatomic) NSString *displayIcon;
@property (copy, nonatomic) NSString *displayDesc;
@property (copy, nonatomic) NSString *voucherLabel;
@property (nonatomic) BOOL isNeedVerifyLive;
@property (nonatomic) BOOL isNeedAuthUnionPay;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

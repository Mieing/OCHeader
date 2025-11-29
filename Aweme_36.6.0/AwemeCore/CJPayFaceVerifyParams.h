@class NSString, CJPayFaceVerifyFullLeadPageConfiguration;

@interface CJPayFaceVerifyParams : JSONModel

@property (copy, nonatomic) NSString *isSigned;
@property (copy, nonatomic) NSString *memberBizOrderNo;
@property (copy, nonatomic) NSString *liveRoute;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *riskSource;
@property (copy, nonatomic) NSString *configParamsStr;
@property (retain, nonatomic) CJPayFaceVerifyFullLeadPageConfiguration *leadPageConfiguration;
@property (readonly, nonatomic) BOOL isVerifyParamsValid;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end

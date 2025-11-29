@class NSString, CJPayFaceVerifyFullLeadPageConfiguration, CJPayFaceVerifyParams;

@interface CJPayFaceVerifyInfo : JSONModel

@property (copy, nonatomic) NSString *verifyType;
@property (copy, nonatomic) NSString *faceContent;
@property (copy, nonatomic) NSString *agreementURL;
@property (copy, nonatomic) NSString *agreementDesc;
@property (copy, nonatomic) NSString *nameMask;
@property (copy, nonatomic) NSString *verifyChannel;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *buttonDesc;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *faceScene;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *processId;
@property (copy, nonatomic) NSString *verifyParamsString;
@property (retain, nonatomic) CJPayFaceVerifyFullLeadPageConfiguration *leadPageConfiguration;
@property (retain, nonatomic) CJPayFaceVerifyParams *verifyParams;
@property (readonly, nonatomic) BOOL shouldOpenFullLeadPage;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end

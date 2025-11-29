@class NSString;

@interface CJPayFaceVerifyFullLeadPageConfiguration : JSONModel

@property (nonatomic) BOOL isTopBrand;
@property (copy, nonatomic) NSString *mainTitleDesc;
@property (copy, nonatomic) NSString *subheadDesc;
@property (copy, nonatomic) NSString *signedProtocolDesc;
@property (copy, nonatomic) NSString *unsignedProtocolDesc;
@property (copy, nonatomic) NSString *popupProtocolDesc;
@property (copy, nonatomic) NSString *agreementDesc;
@property (copy, nonatomic) NSString *agreementURL;
@property (copy, nonatomic) NSString *signedButtonDesc;
@property (copy, nonatomic) NSString *unsignedButtonDesc;
@property (copy, nonatomic) NSString *retentionDesc;
@property (nonatomic) BOOL skipLiveConfirm;
@property (copy, nonatomic) NSString *exitRetentionDesc;
@property (copy, nonatomic) NSString *isInvokeResult;
@property (copy, nonatomic) NSString *checkboxHideSwitch;
@property (copy, nonatomic) NSString *dialogNegativeBtn;
@property (copy, nonatomic) NSString *dialogNegativeAction;
@property (copy, nonatomic) NSString *topBrandIcon;
@property (copy, nonatomic) NSString *topBrandIconDark;
@property (copy, nonatomic) NSString *audioEnable;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end

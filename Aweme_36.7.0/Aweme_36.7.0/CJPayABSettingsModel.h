@class NSString, CJPayBrandPromoteModel;

@interface CJPayABSettingsModel : JSONModel

@property (nonatomic) BOOL isHiddenDouyinLogo;
@property (nonatomic) BOOL showAccountInsuracne;
@property (copy, nonatomic) NSString *darkAccountInsuranceUrl;
@property (copy, nonatomic) NSString *lightAccountInsuranceUrl;
@property (copy, nonatomic) NSString *keyboardDenoiseIconUrl;
@property (copy, nonatomic) NSString *keyboardInsuranceUrl;
@property (copy, nonatomic) NSString *darkKeyboardInsuranceUrl;
@property (copy, nonatomic) NSString *amountKeyboardInsuranceUrl;
@property (copy, nonatomic) NSString *amountKeyboardDarkInsuranceUrl;
@property (retain, nonatomic) CJPayBrandPromoteModel *brandPromoteModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

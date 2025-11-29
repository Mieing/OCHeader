@class NSString, NSArray;

@interface CJPayBrandPromoteModel : JSONModel

@property (nonatomic) BOOL showNewLoading;
@property (nonatomic) BOOL showNewAlertType;
@property (copy, nonatomic) NSString *halfInputPasswordTitle;
@property (copy, nonatomic) NSString *fullVerifyPasswordTitle;
@property (copy, nonatomic) NSString *fullSetPasswordTitle;
@property (copy, nonatomic) NSString *fullSetPasswordTitleAgain;
@property (copy, nonatomic) NSString *cashierTitle;
@property (copy, nonatomic) NSString *addCardTitle;
@property (copy, nonatomic) NSString *addCardH1Title;
@property (copy, nonatomic) NSString *oneKeyQuickCashierTitle;
@property (copy, nonatomic) NSString *openBioFingerPwdTitle;
@property (copy, nonatomic) NSString *openBioFacePwdTitle;
@property (copy, nonatomic) NSArray *douyinLoadingUrlList;
@property (copy, nonatomic) NSString *brandDesignFullScreenBackground;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

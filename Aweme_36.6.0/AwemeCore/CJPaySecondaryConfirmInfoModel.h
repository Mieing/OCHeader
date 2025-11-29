@class NSString, NSDictionary, NSArray;
@protocol CJPayUIComponentTextModel;

@interface CJPaySecondaryConfirmInfoModel : JSONModel

@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *tipsCheckbox;
@property (copy, nonatomic) NSString *choicePwdCheckWay;
@property (copy, nonatomic) NSString *nopwdConfirmHidePeriod;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *checkboxSelectDefault;
@property (copy, nonatomic) NSString *confirmType;
@property (copy, nonatomic) NSString *standardRecDesc;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (nonatomic) BOOL isHideMarketingView;
@property (copy, nonatomic) NSDictionary *standardRecButtonInfo;
@property (copy, nonatomic) NSDictionary *standardRecDescMap;
@property (copy, nonatomic) NSDictionary *standardShowAmountMap;
@property (copy, nonatomic) NSString *tradeName;
@property (nonatomic) BOOL shouldShowTradeName;
@property (copy, nonatomic) NSArray<CJPayUIComponentTextModel> *standardRecTitleBar;
@property (copy, nonatomic) NSString *standardRecPlainText;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end

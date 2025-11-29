@class NSArray, NSString, CJPayPayAgainRecommendPopUpModel;

@interface CJPayPayAgainDisplayInfo : JSONModel

@property (copy, nonatomic) NSArray *recPayTypeIndexList;
@property (copy, nonatomic) NSString *guideTitle;
@property (copy, nonatomic) NSString *guideIcon;
@property (copy, nonatomic) NSString *buttonTips;
@property (nonatomic) BOOL isCombinePayAgain;
@property (nonatomic) long long failPayTypeIndex;
@property (nonatomic) long long singleCombinePayTypeIndex;
@property (copy, nonatomic) NSString *topRightDesc;
@property (copy, nonatomic) NSString *superLink;
@property (copy, nonatomic) NSString *payErrorDesc;
@property (copy, nonatomic) NSString *payErrorDetail;
@property (copy, nonatomic) NSString *payErrorDetailToast;
@property (copy, nonatomic) NSString *recAreaGuideTitle;
@property (copy, nonatomic) NSString *showCombineStyleStr;
@property (nonatomic) long long showCombineStyle;
@property (retain, nonatomic) CJPayPayAgainRecommendPopUpModel *recommendPopup;
@property (copy, nonatomic) NSString *headerStyle;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end

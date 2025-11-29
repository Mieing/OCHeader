@class NSString, CJPayResultShowConfigGuideInfo, NSArray;
@protocol CJPayDiscountBanner;

@interface CJPayResultShowConfig : JSONModel

@property (copy, nonatomic) NSString *remainTime;
@property (copy, nonatomic) NSString *successDesc;
@property (copy, nonatomic) NSString *resultDesc;
@property (copy, nonatomic) NSString *successUrl;
@property (copy, nonatomic) NSString *successBtnDesc;
@property (copy, nonatomic) NSString *successBtnPosition;
@property (nonatomic) int queryResultTimes;
@property (copy, nonatomic) NSString *bgImageURL;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) CJPayResultShowConfigGuideInfo *bottomGuideInfo;
@property (copy, nonatomic) NSString *withdrawResultPageDesc;
@property (copy, nonatomic) NSString *showStyle;
@property (copy, nonatomic) NSString *middleBannerType;
@property (copy, nonatomic) NSArray<CJPayDiscountBanner> *middleBanners;
@property (copy, nonatomic) NSString *bottomBannerType;
@property (copy, nonatomic) NSArray<CJPayDiscountBanner> *bottomBanners;
@property (nonatomic) BOOL hiddenResultPage;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (int)queryResultTime;
- (void).cxx_destruct;

@end

@class NSString, NSArray;
@protocol CJPayBalanceResultPromotionModel, CJPayDiscountBanner;

@interface CJPayBannerResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *placeNo;
@property (copy, nonatomic) NSArray<CJPayDiscountBanner> *bannerList;
@property (copy, nonatomic) NSArray<CJPayBalanceResultPromotionModel> *promotionModels;
@property (copy, nonatomic) NSString *planNo;
@property (copy, nonatomic) NSString *resourceNo;
@property (copy, nonatomic) NSString *materialNo;
@property (copy, nonatomic) NSString *bizType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end

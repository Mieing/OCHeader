@class NSArray, NSString;
@protocol CJPayDynamicComponents;

@interface CJPayPayBannerResponse : CJPayBaseResponse

@property (copy, nonatomic) NSArray<CJPayDynamicComponents> *dynamicComponents;
@property (copy, nonatomic) NSString *benefitInfo;

+ (id)keyMapper;

- (id)obtainBenefitInfo;
- (void).cxx_destruct;

@end

@class NSString, AWEEcommerceGuideSearchV2PrefixIconModel, AWEEcommerceGuideSearchV2GradientModel;

@interface AWEEcommerceGuideSearchV2TabTitleModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *titleIcon;
@property (copy, nonatomic) NSString *selectedTitleColor;
@property (copy, nonatomic) NSString *unselectedTitleColor;
@property (copy, nonatomic) NSString *prefixIcon;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2PrefixIconModel *prefixIconV2;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2GradientModel *selectedBackgroundGradientColor;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2GradientModel *unselectedBackgroundGradientColor;
@property (copy, nonatomic) NSString *unselectedBorderColor;

+ (id)selectedBackgroundGradientColorJSONTransformer;
+ (id)unselectedBackgroundGradientColorJSONTransformer;
+ (id)prefixIconV2JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

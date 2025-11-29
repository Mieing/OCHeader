@class NSArray, NSString, AWEEcommerceGuideSearchV2GradientModel;

@interface AWEEcommerceGuideSearchV2SalesInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *avatarImages;
@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *suffixText;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *borderColor;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2GradientModel *backgroundGradientColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundGradientColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

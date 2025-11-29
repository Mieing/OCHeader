@class NSString, AWEEcommerceGuideSearchV2GradientModel;

@interface AWEEcommerceGuideSearchV2CountDownModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *prefixText;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) AWEEcommerceGuideSearchV2GradientModel *backgroundGradientColor;
@property (copy, nonatomic) NSString *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundGradientColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

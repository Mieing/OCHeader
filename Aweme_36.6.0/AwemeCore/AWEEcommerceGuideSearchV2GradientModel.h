@class UIColor, NSString;

@interface AWEEcommerceGuideSearchV2GradientModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)startColorJSONTransformer;
+ (id)endColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

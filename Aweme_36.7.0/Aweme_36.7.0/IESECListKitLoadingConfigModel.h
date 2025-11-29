@class UIColor, NSString;

@interface IESECListKitLoadingConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) UIColor *loadingColor;
@property (nonatomic) BOOL useCustomColor;
@property (nonatomic) double customCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadingColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

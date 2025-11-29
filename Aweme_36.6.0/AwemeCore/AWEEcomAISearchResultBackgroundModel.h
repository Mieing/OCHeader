@class AWEEcomAISearchResultBackgroundImageModel, AWEEcomAISearchResultBackgroundGradientModel, NSString;

@interface AWEEcomAISearchResultBackgroundModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEEcomAISearchResultBackgroundGradientModel *gradientLight;
@property (retain, nonatomic) AWEEcomAISearchResultBackgroundGradientModel *gradientDark;
@property (retain, nonatomic) AWEEcomAISearchResultBackgroundImageModel *imageLight;
@property (retain, nonatomic) AWEEcomAISearchResultBackgroundImageModel *imageDark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gradientLightJSONTransformer;
+ (id)gradientDarkJSONTransformer;
+ (id)imageLightJSONTransformer;
+ (id)imageDarkJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

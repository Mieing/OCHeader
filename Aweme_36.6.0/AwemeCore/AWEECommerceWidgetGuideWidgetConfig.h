@class AWEECommerceWidgetGuideShoppingWidget, AWEECWidgetPreloadConfig, NSString;

@interface AWEECommerceWidgetGuideWidgetConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEECommerceWidgetGuideShoppingWidget *shoppingWidget;
@property (retain, nonatomic) AWEECWidgetPreloadConfig *preloadConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shoppingWidgetJSONTransformer;
+ (id)preloadConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

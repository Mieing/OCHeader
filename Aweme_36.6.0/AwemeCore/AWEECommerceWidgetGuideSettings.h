@class AWEECommerceWidgetGuideIconConfig, AWEECommerceWidgetGuideWidgetConfig, NSString;

@interface AWEECommerceWidgetGuideSettings : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEECommerceWidgetGuideWidgetConfig *widgetConfig;
@property (retain, nonatomic) AWEECommerceWidgetGuideIconConfig *iconConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)widgetConfigJSONTransformer;
+ (id)iconConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

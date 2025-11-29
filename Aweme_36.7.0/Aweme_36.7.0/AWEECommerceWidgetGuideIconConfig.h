@class NSString, AWEECWidgetPreloadConfig;

@interface AWEECommerceWidgetGuideIconConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEECWidgetPreloadConfig *preloadConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preloadConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWEECommerceWidgetGuidePreloadRuleItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long delay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface AWEECommerceWidgetGuideShowRuleItem : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long day;
@property (nonatomic) unsigned long long maxTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end

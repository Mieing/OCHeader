@class NSArray, NSString;

@interface AWEECommerceWidgetGuideShoppingWidget : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isEnable;
@property (nonatomic) long long updatePeriod;
@property (copy, nonatomic) NSArray *showRuleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showRuleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

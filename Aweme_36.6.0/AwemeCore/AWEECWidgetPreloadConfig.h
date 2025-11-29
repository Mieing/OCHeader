@class NSArray, NSString;

@interface AWEECWidgetPreloadConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needCheckShow;
@property (copy, nonatomic) NSArray *entranceRuleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entranceRuleListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

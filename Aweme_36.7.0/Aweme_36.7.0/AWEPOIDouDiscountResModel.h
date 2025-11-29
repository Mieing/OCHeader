@class NSArray, NSString;

@interface AWEPOIDouDiscountResModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *tabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

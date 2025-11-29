@class NSString;

@interface AWECommerceQuickShopProcessModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *processText;
@property (copy, nonatomic) NSString *enterText;
@property (copy, nonatomic) NSString *transBgText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

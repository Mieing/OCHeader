@class NSArray, NSString;

@interface IESECShopSubTabsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *subTabs;
@property (nonatomic) unsigned long long selectedSubTabType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSArray, NSString, IESECTabKitNavItemConfigModel;

@interface IESECTabKitNavbarConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hidden;
@property (retain, nonatomic) IESECTabKitNavItemConfigModel *itemConfig;
@property (copy, nonatomic) NSArray *rightItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rightItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

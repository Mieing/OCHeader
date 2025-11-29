@class NSString, NSArray, NSDictionary, IESECShopProductsInteractiveControl;

@interface IESECShopProductsItemExtraData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productIDs;
@property (retain, nonatomic) IESECShopProductsInteractiveControl *interactiveControl;
@property (copy, nonatomic) NSArray *imagePreloadConfigs;
@property (copy, nonatomic) NSString *sliceItemType;
@property (copy, nonatomic) NSDictionary *sliceItemActions;
@property (copy, nonatomic) NSDictionary *sliceItemExtra;
@property (copy, nonatomic) NSDictionary *sliceItemStates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sliceItemActionsJSONTransformer;
+ (id)sliceItemExtraJSONTransformer;
+ (id)sliceItemStatesJSONTransformer;
+ (id)interactiveControlJSONTransformer;
+ (id)imagePreloadConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

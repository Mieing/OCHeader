@class NSString, AWEECShoppingGuideBottomBarModel;

@interface AWEECShoppingGuideUIExtraParamsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEECShoppingGuideBottomBarModel *bottomBarModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bottomBarModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

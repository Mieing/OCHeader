@class NSString, NSDictionary;

@interface AWELiveShelfBottomBarData : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showBottomShoppingCart;
@property (copy, nonatomic) NSString *bottomShoppingCartData;
@property (copy, nonatomic) NSDictionary *bottomShoppingCartDataDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

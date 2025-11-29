@class IESECShopTopSearchInfoModel, IESECShopCartModel, NSString;

@interface IESECShopActivityDynamicComponent : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECShopTopSearchInfoModel *topSearchInfo;
@property (retain, nonatomic) IESECShopCartModel *cartModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end

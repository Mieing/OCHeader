@class IESECShopDynamicTabModel, NSString, IESECShopSubTabsModel, IESECShopTabBizInfoModel, IESECShopProductTabModel;

@interface IESECShopTabModelNew : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long tabType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL activated;
@property (retain, nonatomic) IESECShopDynamicTabModel *dynamicTab;
@property (retain, nonatomic) IESECShopProductTabModel *productTab;
@property (retain, nonatomic) IESECShopSubTabsModel *subTabs;
@property (retain, nonatomic) IESECShopTabBizInfoModel *bizInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

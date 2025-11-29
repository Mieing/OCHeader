@class NSString, IESECShopDynamicTabDataModel, IESECShopDynamicTabConfigModel;

@interface IESECShopDynamicTabModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bundleUrl;
@property (copy, nonatomic) NSString *tmpId;
@property (retain, nonatomic) IESECShopDynamicTabDataModel *data;
@property (retain, nonatomic) IESECShopDynamicTabConfigModel *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

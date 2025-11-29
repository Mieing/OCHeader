@class AWEDoubleColumnSearchMerchandiseUserServiceInfoModel, NSString;

@interface AWEDoubleColumnSearchMerchandiseShopServiceInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUserServiceInfoModel *leftItem;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseUserServiceInfoModel *rightItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftItemJSONTransformer;
+ (id)rightItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString;

@interface IESECGoodsDetailBottomShopMetaModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shopUrl;
@property (nonatomic) BOOL isStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

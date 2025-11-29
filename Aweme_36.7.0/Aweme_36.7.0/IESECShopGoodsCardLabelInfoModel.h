@class NSString, IESECShopGoodsCardCoverImageInfoModel;

@interface IESECShopGoodsCardLabelInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) IESECShopGoodsCardCoverImageInfoModel *imageInfo;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *uiElementID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class IESECRelationGoodsModel, NSString;

@interface IESECWinLivingProductModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) IESECRelationGoodsModel *product;
@property (nonatomic) long long rank;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

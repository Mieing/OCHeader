@class IESECMatchPurchaseBaseModel, IESECMatchPurchaseHeadModel, NSArray, IESECMatchPurchaseBottomModel, NSString, IESECMatchPurchaseShopModel;

@interface IESECMatchPurchaseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECMatchPurchaseHeadModel *headModel;
@property (retain, nonatomic) IESECMatchPurchaseShopModel *shopModel;
@property (retain, nonatomic) IESECMatchPurchaseBaseModel *baseModel;
@property (retain, nonatomic) NSArray *itemModels;
@property (retain, nonatomic) IESECMatchPurchaseBottomModel *bottomModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end

@class NSString, IESECURLModel, IESECMatchPurchaseAllCombinationModel;

@interface IESECMatchPurchaseShopModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *titleIcon;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESECMatchPurchaseAllCombinationModel *allCombination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
